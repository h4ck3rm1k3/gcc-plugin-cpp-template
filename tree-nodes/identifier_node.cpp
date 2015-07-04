#include "identifier_node.hpp"
#include <iostream>
#include <vector>
#include <gcc-plugin.h>
#include <coretypes.h>
#include <tree.h>

TC_IDENTIFIER_NODE aIDENTIFIER_NODE;

void TC_IDENTIFIER_NODE::finish_type (tree t) {
        cerr << "finish_type: IDENTIFIER_NODE" << t << endl;
};

void TC_IDENTIFIER_NODE::finish_decl (tree t) {
        cerr << "finish_decl: IDENTIFIER_NODE" << t << endl;
};

void TC_IDENTIFIER_NODE::finish_unit (tree t) {
        cerr << "finish_unit: IDENTIFIER_NODE" << t << endl;
};


const char * TC_IDENTIFIER_NODE::id_str(tree_node * t){
  //check_type(t);
  const char * s = IDENTIFIER_POINTER(t);
  return s;
}

const char * TC_IDENTIFIER_NODE::id(tree_node * t){
  if (! t)
    return "NULL";
  return id_str(t);
};
