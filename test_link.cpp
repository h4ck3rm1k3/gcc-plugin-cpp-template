
//#include <iostream>
//#include <vector>
#include <gcc-plugin.h>
#include <coretypes.h>
#include <tree.h>

const char *get_tree_code_name (enum tree_code) {
  return "FAKE";
}

extern void register_callback (const char *plugin_name,
                               int event,
                               plugin_callback_func callback,
                               void *user_data){}


const enum tree_code_class tree_code_type[] = {};

int main() {
  // test
  return 0;
  
}
