#include <iostream>
#include <vector>
using namespace std;

union tree_node;
typedef union tree_node *tree;
//class RecordContext;
extern "C" void cpp_callbackPLUGIN_FINISH_TYPE (tree t, void *i);
extern "C" void cpp_callbackPLUGIN_START_UNIT ();


void cpp_callbackPLUGIN_START_UNIT ();
void cpp_callbackPLUGIN_FINISH_TYPE (tree t, void *i);



