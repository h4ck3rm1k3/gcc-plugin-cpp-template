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
extern "C" void   cpp_callbackPLUGIN_START_UNIT ();
void cpp_callbackPLUGIN_START_UNIT ()
{
}

extern "C" void cpp_callbackPLUGIN_FINISH_TYPE (tree t, void *i);
void cpp_callbackPLUGIN_FINISH_TYPE (tree t, void *i)
{
  int x= call_type_ret<CallBack,int>(t,
                                     CallBack::finish_type_callback
                                     );
}

