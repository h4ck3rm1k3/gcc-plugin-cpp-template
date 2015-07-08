
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
// void
// symtab_node::dump_table (FILE *f)
// {
// }
//void * symtab;
//symbol_table *symtab =0;

tree array_type_nelts(tree_node const*) {return 0;}
long int int_size_in_bytes(tree_node const*) { return 0;}

vec<tree, va_gc> *all_translation_units;
tree global_namespace;
int main() {
  // test
  return 0;
  
}
