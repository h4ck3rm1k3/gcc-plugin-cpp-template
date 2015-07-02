/*
*
*/

#include <stdio.h>
#include <gcc-plugin.h>
#include "tree.h"
#include "plugin-version.h"
#include "tm.h"
#include "cp/cp-tree.h"
#include "ggc.h"
#include <config.h>
#include <system.h>
#include <coretypes.h>
#include <tm.h>
#include <basic-block.h>

#include "plugincpp.hpp"


static void generic_callback_PLUGIN_ALL_IPA_PASSES_START(){}

void cpp_callback_PLUGIN_FINISH_TYPE (tree t, void *i);

static void generic_callback_PLUGIN_FINISH_TYPE (tree t, void *i)
{
  cpp_callbackPLUGIN_FINISH_TYPE (t, i);
}

static void generic_callback_PLUGIN_START_UNIT()
{
  cpp_callbackPLUGIN_START_UNIT ();
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
    0 \
                                                                        );
                     //#X                                               



//void (*)(union tree_node *, void *)

void register_special_plugins  (struct plugin_name_args *plugin_info){
  DEFEVENTSPECIAL (PLUGIN_FINISH_TYPE);

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

vector<CallBack*> callbacks(MAX_TREE_CODES);
