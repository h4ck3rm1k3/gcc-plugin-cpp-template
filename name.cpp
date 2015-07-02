#include <iostream>
#include <vector>
#include <gcc-plugin.h>
#include <coretypes.h>
#include <tree.h>
#include "record_context.hpp"
#include "plugincpp.hpp"
#include "identifer_node.hpp"
#include "record_type.hpp"
#include "switchcall.hpp"
#include "name.hpp"

const char * NameWrapper::call_type_IDENTIFIER_NODE(tree b){
  //return "NAME:ID";
  return IDENTIFIER_POINTER (b);
}

const char * NameWrapper::call_type_TYPE_DECL(tree b){
  //type_name = DECL_NAME (b);
  if (DECL_P (b) && DECL_NAME (b))
    return IDENTIFIER_POINTER (DECL_NAME (b));
  else
    return "ERROR TYPE DECL";
  //return "NAME:TYPE";
}

const char * NameWrapper::call_type_RECORD_TYPE(tree b){
  return "NAME:RECORD";
}
