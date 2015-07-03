/*
*
*/

#include <stdio.h>
#include <gcc-plugin.h>
#include "tree.h"
#include "plugin-version.h"

static void generic_callback_PLUGIN_ALL_IPA_PASSES_START(){}

void cpp_callback_PLUGIN_FINISH_TYPE (tree t, void *i);
void cpp_callback_PLUGIN_FINISH_DECL (tree t, void *i);
void cpp_callback_PLUGIN_START_UNIT (void *, void *);
void cpp_callback_PLUGIN_FINISH_UNIT (void *, void *);

static void generic_callback_PLUGIN_FINISH_TYPE (tree t, void *i)
{
  cpp_callback_PLUGIN_FINISH_TYPE (t, i);
}

static void generic_callback_PLUGIN_FINISH_DECL (tree t, void *i)
{
  cpp_callback_PLUGIN_FINISH_DECL (t, i);
}

static void generic_callback_PLUGIN_START_UNIT(void *a, void * b)
{
  cpp_callback_PLUGIN_START_UNIT (a,b);
}

static void generic_callback_PLUGIN_FINISH_UNIT(void *a, void * b)
{
  cpp_callback_PLUGIN_FINISH_UNIT (a,b);
}

static void generic_callback_PLUGIN_FINISH (tree t, void *_){}
static void generic_callback_PLUGIN_ATTRIBUTES () {}

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
// PLUGIN_PASS_MANAGER_SETUP,
// PLUGIN_PRE_GENERICIZE,
// PLUGIN_FINISH,
// PLUGIN_INFO,
// PLUGIN_GGC_START,
// PLUGIN_GGC_MARKING,
// PLUGIN_GGC_END,
// PLUGIN_REGISTER_GGC_ROOTS,
// PLUGIN_REGISTER_GGC_CACHES,
// PLUGIN_ATTRIBUTES,
// PLUGIN_PRAGMAS,
// PLUGIN_ALL_PASSES_START,
// PLUGIN_ALL_PASSES_END,
// PLUGIN_ALL_IPA_PASSES_START,
// PLUGIN_ALL_IPA_PASSES_END,
// PLUGIN_OVERRIDE_GATE,
// PLUGIN_PASS_EXECUTION,
// PLUGIN_EARLY_GIMPLE_PASSES_START,
// PLUGIN_EARLY_GIMPLE_PASSES_END,
// PLUGIN_NEW_PASS,
// PLUGIN_INCLUDE_FILE,
// PLUGIN_EVENT_FIRST_DYNAMIC


void register_special_plugins  (struct plugin_name_args *plugin_info){
  DEFEVENTSPECIAL (PLUGIN_FINISH_TYPE);
  DEFEVENTSPECIAL (PLUGIN_FINISH_DECL);
  DEFEVENTSPECIAL (PLUGIN_START_UNIT);
  DEFEVENTSPECIAL (PLUGIN_FINISH_UNIT);
  /* Called before GCC exits.  */
  DEFEVENTSPECIAL (PLUGIN_FINISH);

  DEFEVENTSPECIAL (PLUGIN_ATTRIBUTES);

  /* Called at start of GCC Garbage Collection. */
  //  DEFEVENTSPECIAL (PLUGIN_GGC_START);
  //  DEFEVENTSPECIAL (PLUGIN_GGC_END);

  DEFEVENTSPECIAL ( PLUGIN_START_UNIT); // open the output files
  DEFEVENTSPECIAL ( PLUGIN_ALL_IPA_PASSES_START); // close the output files
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



