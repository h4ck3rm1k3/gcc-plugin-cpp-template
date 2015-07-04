#include <iostream>
#include <vector>
#include <gcc-plugin.h>
#include <coretypes.h>
#include <tree.h>
#include "switchcall.hpp"
#include "name.hpp"
#include "record_context.hpp"
#include "introspection.hpp"
#include "tree-dump.h"


TC_TYPE_DECL aTC_TYPE_DECL;

void TC_TYPE_DECL::finish_type (tree t){
  std::cerr << "typedecl type finish" << std::endl;
  tree type = t->typed.type;
  check_type(type);
}

void TC_TYPE_DECL::finish_decl (tree t){
  std::cerr << "typedecl decl finish" << std::endl;
  tree type = t->typed.type;
  check_type(type);
}

void TC_TYPE_DECL::finish_unit (tree t){
  std::cerr << "typedecl unit finish";
 
  tree type = t->typed.type;

  if (type) {
    int x= call_type_ret<CallBack,int>(type,
                                       CallBack::finish_decl_callback
                                       );
  }

  // tree base = t->typed.base;
  // if (base) {
  //   int x= call_type_ret<CallBack,int>(base,
  //                                      CallBack::finish_decl_callback
  //                                      );
  // }
  
  tree dname= DECL_NAME (t);
  if (dname){
    cerr << " Name1:" << IDENTIFIER_POINTER (dname);
  }
  
  //check_type(type);
  cerr << std::endl;
}
