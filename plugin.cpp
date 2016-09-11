/*
*
*/
#include <iostream>
#include <stdio.h>
#include <gcc-plugin.h>
#include "tree.h"
#include "plugin-version.h"
//#include <iostream>
#include <vector>
#include <gcc-plugin.h>
#include <coretypes.h>
#include <tree.h>
#include "record_context.hpp"
#include <string.h>
#include "introspection.hpp"
#include "callback.hpp"
#include "callbacks.hpp"
#include "tree-pass.h"
#include "cp/name-lookup.h"
#include "owl/librdfinterface.hpp"
#include <google/coredumper.h>

#include <execinfo.h>
#include <stdio.h>
#include <stdlib.h>

#include <signal.h>
#include <criu/criu.h>

static void error_msg(int code){
	switch (code) {
	case -EBADE:
	  cerr << "RPC has returned fail" << endl;
		break;
	case -ECONNREFUSED:
	  cerr << "Unable to connect to CRIU" << endl;
		break;
	case -ECOMM:
	  cerr << "Unable to send/recv msg to/from CRIU" << endl;
		break;
	case -EINVAL:
	  cerr << "CRIU doesn't support this type of request."
	    "You should probably update CRIU" << endl;
		break;
	case -EBADMSG:
	  cerr << "Unexpected response from CRIU." << endl;
		break;
	default:
	  cerr << "Unknown error type code." << endl;
	}
}

//static int ccount = 0;
static void write_core(const char * tag) {
  //char fname [256];
  //sprintf(fname,"core.%s.%d",tag,ccount++);
  //printf("going to write core %s\n",fname);
  //WriteCoreDump(fname); 
  //raise (SIGABRT);
  cout << "Dump start\n";
  criu_init_opts();

  /*
    start the daemon in the bg like this in the same dir
    /usr/sbin/criu service -v4
  */
  //const char socket = "./criu_service.socket";
  char  socket [300];
  //strcpy(socket, "/var/run/criu_service.socket");
  strcpy(socket,  "/usr/local/sbin/criu");
  criu_set_service_address(socket);
  criu_set_shell_job(true);
  criu_set_leave_running(true);
  //cribu_set_service_binary("/usr/local/sbin/criu");
  //criu_set_pid(pid);
  //criu_set_log_file("dump.log");
  criu_set_log_level(4);
  int fd = open("./criu/", O_DIRECTORY);
  criu_set_images_dir_fd(fd);

  //criu_set_service_comm(CRIU_COMM_SK);
 
  int ret = criu_check();
  if (ret < 0) {
    cout << "err" << ret;
    cout << "check failed\n";
    error_msg(ret);
  }
  else {
    cout << "check succeeded\n";

  }

    
   ret = criu_dump();
   //sleep(4);
  if (ret < 0) {
    //what_err_ret_mean(ret);
    //kill(pid, SIGKILL);
    cout << "err" << ret;
    cout << "Dump failed\n";
    error_msg(ret);
  }
  else {
    cout << "Dump succeeded\n";

  }
  


	
}

//#include "symtab.h"
//#include "cgraph.h"

using namespace std;
union tree_node;
typedef union tree_node *tree;

// static void
// generic_callback_PLUGIN_ALL_IPA_PASSES_START ()
// {
// }

static void
generic_callback_PLUGIN_FINISH_TYPE (tree t, void *i)
{
  //cpp_callback_PLUGIN_FINISH_TYPE (t, i);
  cerr << "generic_callback_PLUGIN_FINISH_TYPE(";
  call_type_ret < CallBack, int >(t, CallBack::finish_type_callback);
  cerr << ")" << endl;
}

static void
generic_callback_PLUGIN_FINISH_DECL (tree t, void *i)
{
  //cpp_callback_PLUGIN_FINISH_DECL (t, i);
  /*cerr  << "finish decl" << endl;
     int x= call_type_ret<CallBack,int>(t,
     CallBack::finish_decl_callback
     ); */
}

static void generic_callback_PLUGIN_FINISH_UNIT (void *a, void *b);



static void
generic_callback_PLUGIN_START_UNIT (void *a, void *b)
{
  cerr << "start unit" << a << " : " << b << " main_input_filename:" <<
    main_input_filename << endl;
  rdf_world::get_context ().start_unit (main_input_filename);
  //generic_callback_PLUGIN_FINISH_UNIT(a,b);
}

/* Obtain a backtrace and print it to stdout. 
   https://www.gnu.org/software/libc/manual/html_node/Backtraces.html
 */
void
print_trace (void)
{
  void *array[10];
  size_t size;
  char **strings;
  size_t i;

  size = backtrace (array, 20);
  strings = backtrace_symbols (array, size);

  cerr << "Obtained %zd stack frames." << size << "\n";

  for (i = 0; i < size; i++){
    cerr << strings[i] << endl;
  }

  free (strings);
}

static void
generic_callback_PLUGIN_FINISH_UNIT (void *a, void *b)
{
  cerr << "finish unit"<< a << " : " << b << endl;
   int i;
   tree t;
   FOR_EACH_VEC_ELT ( (*all_translation_units), i, t )
     {
       cerr << "each unit"<< i << " : " << t  << endl;
       //     call_type_ret<CallBack,int>(t,
       //                                 CallBack::finish_unit_callback);
     }    
  // call_type_ret<CallBack,int>(global_namespace,
  //                             CallBack::finish_unit_callback); 
  //cerr << "end unit"<< a << " : " << b  << endl;
  //cerr << "end unit" << endl;

 

  
  rdf_world::get_context ().finish_unit ();

  print_trace ();
  write_core("finish_unit");    
}

 // static void
 // generic_callback_PLUGIN_FINISH (tree t, void *_)
 // {
 //   cerr << "finished_plugin"  << endl;
 // }

// static void
// generic_callback_PLUGIN_ATTRIBUTES ()
// {
// }

// /*
//   handling of new passes
// */

 static void
 generic_callback_PLUGIN_NEW_PASS (opt_pass * new_pass, void *b)
 {
   cerr << "NEW PASS DEFINED_" << new_pass << " name: "<< new_pass->name << endl;
 }

// static void
// generic_callback_PLUGIN_EVENT_FIRST_DYNAMIC (opt_pass * new_pass, void *b)
// {
//   cerr << "PLUGIN_EVENT_FIRST_DYNAMIC: " << new_pass;
//   cerr << endl;
//   //cerr << " name: "<< new_pass->name << endl;
// }

static void
generic_callback_PLUGIN_ALL_PASSES_START (opt_pass * new_pass, void *b)
{
  cerr << "PLUGIN_ALL_PASSES_START: " << new_pass;
  cerr << endl;
}

//static int callcount = 0;
static void
generic_callback_PLUGIN_PASS_EXECUTION (opt_pass * new_pass, void *b)
{

  cerr << "PLUGIN_EVENT_PASS_EXECUTION: " << new_pass->name;
  cerr << "\tNumber: " << new_pass->static_pass_number;
  cerr << "\tType: " << new_pass->type;
  cerr << endl;
  // tree t;
  // int i;
  // FOR_EACH_VEC_ELT ( (*all_translation_units), i, t ){
  //   cerr << "insite each unit"<< i << " : " << t  << endl;
  //   call_type_ret<CallBack,int>(t,
  //                               CallBack::finish_unit_callback);
  // }
  // if (callcount++ == 0) {
  //   write_core("first_pass");
  // }
}

#define DEFEVENTEMPTY(X)                                  \
  static void generic_callback_ ##X (void *a, void * b) {  \
      cerr << "PLUGIN_" #X << a << " : " << b  << endl;   \
  }

//DEFEVENTEMPTY (PLUGIN_PASS_MANAGER_SETUP);
//DEFEVENTEMPTY (PLUGIN_PRE_GENERICIZE);
DEFEVENTEMPTY (PLUGIN_FINISH);
//DEFEVENTEMPTY (PLUGIN_INFO);
//DEFEVENTEMPTY (PLUGIN_GGC_START);
//DEFEVENTEMPTY (PLUGIN_GGC_MARKING);
//DEFEVENTEMPTY (PLUGIN_GGC_END);
//DEFEVENTEMPTY (PLUGIN_REGISTER_GGC_ROOTS);
//DEFEVENTEMPTY (PLUGIN_REGISTER_GGC_CACHES);
//DEFEVENTEMPTY (PLUGIN_ATTRIBUTES);
//DEFEVENTEMPTY (PLUGIN_PRAGMAS);
//DEFEVENTEMPTY (PLUGIN_ALL_PASSES_START);
DEFEVENTEMPTY (PLUGIN_ALL_PASSES_END);
//DEFEVENTEMPTY (PLUGIN_ALL_IPA_PASSES_START);
//DEFEVENTEMPTY (PLUGIN_ALL_IPA_PASSES_END);
//DEFEVENTEMPTY (PLUGIN_OVERRIDE_GATE);

//DEFEVENTEMPTY (PLUGIN_EARLY_GIMPLE_PASSES_START);
//DEFEVENTEMPTY (PLUGIN_EARLY_GIMPLE_PASSES_END);
//DEFEVENTEMPTY (PLUGIN_NEW_PASS);
//DEFEVENTEMPTY (PLUGIN_INCLUDE_FILE);
DEFEVENTEMPTY ( PLUGIN_EVENT_FIRST_DYNAMIC);

/*
  register a simple handler for all plugins,
  the commented out ones just crash
*/
#define DEFEVENTSPECIAL(X)                                              \
  cerr << "going to register callback" << X << endl;			\
  register_callback (                                                   \
                     plugin_info->base_name,                            \
                     X,                                                 \
                     (plugin_callback_func)&generic_callback_ ##X,      \
                     0                                                  \
                                                                        );
//enum plugin_event

void
register_special_plugins (struct plugin_name_args *plugin_info)
{
  /* Called at start of GCC Garbage Collection. */
  /* Called before GCC exits.  */


  //DEFEVENTSPECIAL(PLUGIN_ALL_IPA_PASSES_END);
  //DEFEVENTSPECIAL(PLUGIN_ALL_IPA_PASSES_START);
  //DEFEVENTSPECIAL(PLUGIN_ALL_IPA_PASSES_START); // close the output files
  DEFEVENTSPECIAL(PLUGIN_ALL_PASSES_END);
  DEFEVENTSPECIAL (PLUGIN_ALL_PASSES_START);
  
  //DEFEVENTSPECIAL(PLUGIN_ATTRIBUTES);
  //DEFEVENTSPECIAL(PLUGIN_EARLY_GIMPLE_PASSES_END);
  //DEFEVENTSPECIAL(PLUGIN_EARLY_GIMPLE_PASSES_START);
  //DEFEVENTSPECIAL(PLUGIN_EVENT_FIRST_DYNAMIC);
  DEFEVENTSPECIAL(PLUGIN_FINISH );
  //DEFEVENTSPECIAL(PLUGIN_GGC_END);
  //DEFEVENTSPECIAL(PLUGIN_GGC_MARKING);
  //DEFEVENTSPECIAL(PLUGIN_GGC_START);
  //DEFEVENTSPECIAL(PLUGIN_INFO ); crash
  //DEFEVENTSPECIAL(PLUGIN_OVERRIDE_GATE);
  //DEFEVENTSPECIAL(PLUGIN_PASS_MANAGER_SETUP ); crash
  //DEFEVENTSPECIAL(PLUGIN_PRAGMAS);
  //DEFEVENTSPECIAL(PLUGIN_REGISTER_GGC_CACHES);
  //DEFEVENTSPECIAL(PLUGIN_REGISTER_GGC_ROOTS);
  DEFEVENTSPECIAL (PLUGIN_FINISH);
  DEFEVENTSPECIAL (PLUGIN_FINISH_DECL);
  DEFEVENTSPECIAL (PLUGIN_FINISH_TYPE);
  DEFEVENTSPECIAL (PLUGIN_FINISH_UNIT);
  //  DEFEVENTSPECIAL(PLUGIN_INCLUDE_FILE);
  //DEFEVENTSPECIAL(PLUGIN_NEW_PASS);
  DEFEVENTSPECIAL (PLUGIN_PASS_EXECUTION);
  DEFEVENTSPECIAL (PLUGIN_START_UNIT);	// open the output files
  //DEFEVENTSPECIAL(PLUGIN_PRE_GENERICIZE );
}

int plugin_is_GPL_compatible;	//
int
plugin_init (struct plugin_name_args *plugin_info,
	     struct plugin_gcc_version *version)
{
  //  register_all_plugins(plugin_info);
  register_special_plugins (plugin_info);
  return 0;
}
