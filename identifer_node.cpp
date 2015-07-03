/////////////////////////////////////////////////////////////////
/// IDENTIFIER_NODE
/////////////////////////////////////////////////////////////////

#include <iostream>
#include <vector>
#include <gcc-plugin.h>
#include <coretypes.h>
#include <tree.h>
#include "plugincpp.hpp"
//#include "field_decl.hpp"
#include "identifer_node.hpp"
//#include "record_type.hpp"
//#include "switchcall.hpp"
//#include "name.hpp"

class TC_IDENTIFIER_NODE;
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

TC_IDENTIFIER_NODE aTC_IDENTIFIER_NODE;
