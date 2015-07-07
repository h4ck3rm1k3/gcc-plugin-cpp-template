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

class DefaultIntVal {
public:
  operator int() { return -1;}
};

class TypeDeclType : public SwitchCall<int,DefaultIntVal>{
  /*
    handle the type of a type decl
  */
public:
  TypeDeclType(tree name){
    call<TypeDeclType>(name);
  }
  //const char * call_type_IDENTIFIER_NODE(tree b);
  //const char * call_type_TYPE_DECL(tree b);
  int call_type_RECORD_TYPE(tree b) {   
  }
};

void TC_TYPE_DECL::finish_type (tree t){
  std::cerr << "TC_TYPE_DECL::finish_type(";
  // lookup name
  tree name= DECL_NAME(t);
  if (name) {
    NameWrapper namew(name);
    cerr << "NAME(" << namew.resolve() << "),";
  }
  
  tree type = t->typed.type;
  check_type(type);
  std::cerr << "typedecl::type( " << type << " ),";
  /*
    this creates a recursion
    call_type_ret<CallBack,int>(type,
                              CallBack::finish_type_callback
                              );
  */
  std::cerr << ")";
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
