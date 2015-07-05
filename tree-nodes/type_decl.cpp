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
  std::cerr << "TC_TYPE_DECL::finish_type" << std::endl;

  // lookup name
  tree name= DECL_NAME(t);
  if (name) {
    NameWrapper namew(name);
    cerr << "NAME" << namew.resolve();
  }
  
  tree type = t->typed.type;
  check_type(type);
  std::cerr << "typedecl::type( " << type << " )" << std::endl;
  /*
    this creates a recursion
    call_type_ret<CallBack,int>(type,
                              CallBack::finish_type_callback
                              );
  */
}

void TC_TYPE_DECL::finish_decl (tree t){
  std::cerr << "tc_typedecl finish_decl:";
  tree type = t->typed.type;
  int x= call_type_ret<CallBack,int>(type,
                                     CallBack::finish_decl_callback
                                     );
  
  cerr << std::endl;
}

void TC_TYPE_DECL::finish_unit (tree t){
  std::cerr << "typedecl finish_unit:";

  tree dname= DECL_NAME (t);
  if (dname) {
    cerr << " Name1:'" << IDENTIFIER_POINTER (dname) << "'";
  }
  else {
    cerr << " Name1:<NoNAME> ";
  }
  cerr << " -> " << endl;
  
  tree type = t->typed.type;
  if (type) {
    int x= call_type_ret<
      CallBack,
      int>(type,
           CallBack::finish_unit_callback
           );
  }

  cerr << std::endl;
}
