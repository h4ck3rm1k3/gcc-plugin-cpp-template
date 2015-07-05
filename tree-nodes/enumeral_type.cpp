
#include "enumeral_type.hpp"

#include "switchcall.hpp"
class DefaultInt {
public:
  operator int() {return -1;}
};

class ProcEnum : public SwitchCall<int,DefaultInt>{
  tree node;
public:
  ProcEnum(tree node): node(node){}
  int call_type_CONST_DECL(tree b);
  int resolve() {
    enum tree_code tc=node->typed.base.code;
    cerr << "Proc Enum "<< get_tree_code_name (tc) << endl;
    return call<ProcEnum>(node);
  }
};


TC_ENUMERAL_TYPE aENUMERAL_TYPE;

void TC_ENUMERAL_TYPE::finish_type (tree t) {
  cerr << "finish_type: ENUMERAL_TYPE" << t << endl;
  /*  cerr << "ENUM";
  while (t) {      
    ProcEnum(t).resolve();
    t = TREE_CHAIN(t);
    }*/
}

void TC_ENUMERAL_TYPE::finish_decl (tree t) {
  cerr << "finish_decl: ENUMERAL_TYPE" << t << endl;
};

void TC_ENUMERAL_TYPE::finish_unit (tree t) {
  cerr << "Unit(ENUMERAL_TYPE(";
  for (tree tv = TYPE_VALUES (t); tv ; tv = TREE_CHAIN (tv)) {
    tree v = TREE_VALUE (tv);      
    ProcEnum(v).resolve(); 
  }
  cerr << "))"<< endl;
};

int ProcEnum::call_type_CONST_DECL(tree_node* t){
  cerr << "ENUM_CONST_DECL(";
  cerr << " Name: " << IDENTIFIER_POINTER (DECL_NAME (t));
  cerr << " Value: " << TREE_INT_CST_LOW (DECL_INITIAL (t));
  cerr << ")";

}
