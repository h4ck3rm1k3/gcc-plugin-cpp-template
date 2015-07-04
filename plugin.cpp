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
using namespace std;
union tree_node;
typedef union tree_node *tree;

static void generic_callback_PLUGIN_ALL_IPA_PASSES_START(){}

static void generic_callback_PLUGIN_FINISH_TYPE (tree t, void *i)
{
  //cpp_callback_PLUGIN_FINISH_TYPE (t, i);
    cerr  << "finish type" << endl;
    int x= call_type_ret<CallBack,int>(t,
                                       CallBack::finish_type_callback
                                       );
}

static void generic_callback_PLUGIN_FINISH_DECL (tree t, void *i)
{
  //cpp_callback_PLUGIN_FINISH_DECL (t, i);
  cerr  << "finish decl" << endl;
  int x= call_type_ret<CallBack,int>(t,
                                     CallBack::finish_decl_callback
                                     );
}

static void generic_callback_PLUGIN_START_UNIT(void *a, void * b)
{
  cerr << "start unit"<< a << " : " << b  << endl;
}

static void generic_callback_PLUGIN_FINISH_UNIT(void *a, void * b)
{
  cerr << "end unit"<< a << " : " << b  << endl;
}

static void generic_callback_PLUGIN_FINISH (tree t, void *_){}
static void generic_callback_PLUGIN_ATTRIBUTES () {}

/*
  handling of new passes
*/
//static void generic_callback_PLUGIN_NEW_PASS (opt_pass *new_pass, void * b) {
//  cerr << "NEW PASS DEFINED_" << new_pass  << endl;
//}


#define DEFEVENTEMPTY(X)                                  \
  static void generic_callback_ ##X (void *a, void * b) {  \
      cerr << "PLUGIN_" #X << a << " : " << b  << endl;   \
  }


  DEFEVENTEMPTY ( PLUGIN_PASS_MANAGER_SETUP );
  DEFEVENTEMPTY ( PLUGIN_PRE_GENERICIZE );
  DEFEVENTEMPTY ( PLUGIN_FINISH );
  DEFEVENTEMPTY ( PLUGIN_INFO );
  DEFEVENTEMPTY ( PLUGIN_GGC_START);
  DEFEVENTEMPTY ( PLUGIN_GGC_MARKING);
  DEFEVENTEMPTY ( PLUGIN_GGC_END);
  DEFEVENTEMPTY ( PLUGIN_REGISTER_GGC_ROOTS);
  DEFEVENTEMPTY ( PLUGIN_REGISTER_GGC_CACHES);
  DEFEVENTEMPTY ( PLUGIN_ATTRIBUTES);
  DEFEVENTEMPTY ( PLUGIN_PRAGMAS);
  DEFEVENTEMPTY ( PLUGIN_ALL_PASSES_START);
  DEFEVENTEMPTY ( PLUGIN_ALL_PASSES_END);
  DEFEVENTEMPTY ( PLUGIN_ALL_IPA_PASSES_START);
  DEFEVENTEMPTY ( PLUGIN_ALL_IPA_PASSES_END);
  DEFEVENTEMPTY ( PLUGIN_OVERRIDE_GATE);
  DEFEVENTEMPTY ( PLUGIN_PASS_EXECUTION);
  DEFEVENTEMPTY ( PLUGIN_EARLY_GIMPLE_PASSES_START);
  DEFEVENTEMPTY ( PLUGIN_EARLY_GIMPLE_PASSES_END);
//DEFEVENTEMPTY ( PLUGIN_NEW_PASS);
  DEFEVENTEMPTY ( PLUGIN_INCLUDE_FILE);
  DEFEVENTEMPTY ( PLUGIN_EVENT_FIRST_DYNAMIC);

/*
  register a simple handler for all plugins,
  the commented out ones just crash
*/
#define DEFEVENTSPECIAL(X)                                              \
  register_callback (                                                   \
                     plugin_info->base_name,                            \
                     X,                                                 \
                     (plugin_callback_func)&generic_callback_ ##X,      \
                     0                                                  \
                                                                        );
//enum plugin_event

void register_special_plugins  (struct plugin_name_args *plugin_info){
  /* Called at start of GCC Garbage Collection. */
  /* Called before GCC exits.  */


  //DEFEVENTSPECIAL(PLUGIN_ALL_IPA_PASSES_END);
  //DEFEVENTSPECIAL(PLUGIN_ALL_IPA_PASSES_START);
  //DEFEVENTSPECIAL(PLUGIN_ALL_IPA_PASSES_START); // close the output files
  //DEFEVENTSPECIAL(PLUGIN_ALL_PASSES_END);
  //DEFEVENTSPECIAL(PLUGIN_ALL_PASSES_START);
  //DEFEVENTSPECIAL(PLUGIN_ATTRIBUTES);
  //DEFEVENTSPECIAL(PLUGIN_EARLY_GIMPLE_PASSES_END);
  //DEFEVENTSPECIAL(PLUGIN_EARLY_GIMPLE_PASSES_START);
  DEFEVENTSPECIAL(PLUGIN_EVENT_FIRST_DYNAMIC);
  //DEFEVENTSPECIAL(PLUGIN_FINISH );
  //DEFEVENTSPECIAL(PLUGIN_GGC_END);
  //DEFEVENTSPECIAL(PLUGIN_GGC_MARKING);
  //DEFEVENTSPECIAL(PLUGIN_GGC_START);
  //DEFEVENTSPECIAL(PLUGIN_INFO ); crash
  //DEFEVENTSPECIAL(PLUGIN_OVERRIDE_GATE);
  //DEFEVENTSPECIAL(PLUGIN_PASS_MANAGER_SETUP ); crash
  //DEFEVENTSPECIAL(PLUGIN_PRAGMAS);
  //DEFEVENTSPECIAL(PLUGIN_REGISTER_GGC_CACHES);
  //DEFEVENTSPECIAL(PLUGIN_REGISTER_GGC_ROOTS);
  DEFEVENTSPECIAL(PLUGIN_FINISH);
  DEFEVENTSPECIAL(PLUGIN_FINISH_DECL);
  DEFEVENTSPECIAL(PLUGIN_FINISH_TYPE);
  DEFEVENTSPECIAL(PLUGIN_FINISH_UNIT);
  DEFEVENTSPECIAL(PLUGIN_INCLUDE_FILE);
  //  DEFEVENTSPECIAL(PLUGIN_NEW_PASS);
  DEFEVENTSPECIAL(PLUGIN_PASS_EXECUTION);
  DEFEVENTSPECIAL(PLUGIN_START_UNIT); // open the output files
  DEFEVENTSPECIAL(PLUGIN_PRE_GENERICIZE );
}

int plugin_is_GPL_compatible; //
int
plugin_init (struct plugin_name_args *plugin_info,
             struct plugin_gcc_version *version)
{
  //  register_all_plugins(plugin_info);
  register_special_plugins  (plugin_info);
  return 0;
}



