#include <gcc-plugin.h>
#include <coretypes.h>
#include <tree.h>

#include <vector>
class CallBack;
std::vector<CallBack*> callbacks(MAX_TREE_CODES);
