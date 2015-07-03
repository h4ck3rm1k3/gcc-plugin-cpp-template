/*
 *
*/
#include <iostream>
#include <vector>
#include <gcc-plugin.h>
#include <coretypes.h>
#include <tree.h>
#include "plugincpp.hpp"
#include "record_context.hpp"
#include <string.h>
#include "introspection.hpp"
#include "callback.hpp"
#include "callbacks.hpp"
using namespace std;

union tree_node;
typedef union tree_node *tree;

/*
  entry points from the c plugin
*/
//extern "C" void   cpp_callback_PLUGIN_START_UNIT ();
void cpp_callback_PLUGIN_START_UNIT (void *, void *)
{
  cerr  << "start unit" << endl;
}

void cpp_callback_PLUGIN_FINISH_UNIT (void *, void *)
{
  cerr  << "finish unit" << endl;
}

//extern "C" void cpp_callback_PLUGIN_FINISH_TYPE (tree t, void *i);
void cpp_callback_PLUGIN_FINISH_TYPE (tree t, void *i)
{
  cerr  << "finish type" << endl;
  int x= call_type_ret<CallBack,int>(t,
                                     CallBack::finish_type_callback
                                     );
}

void cpp_callback_PLUGIN_FINISH_DECL (tree t, void *i)
{
  cerr  << "finish decl" << endl;
  int x= call_type_ret<CallBack,int>(t,
                                     CallBack::finish_type_callback
                                     );
}

