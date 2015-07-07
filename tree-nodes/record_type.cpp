#include <iostream>
#include <vector>
#include <gcc-plugin.h>
#include <coretypes.h>
#include <tree.h>
#include "switchcall.hpp"
#include "name.hpp"
#include "record_context.hpp"
#include "introspection.hpp"

/////////////////////////////////////////////////////////////////

tree TC_RECORD_TYPE::fields(tree t) {
  return TYPE_FIELDS(t);
}
tree TC_RECORD_TYPE::name(tree t) {
  return TYPE_NAME(t);
}
tree TC_RECORD_TYPE::chain(tree t) {
  return TREE_CHAIN(t);
}


const char * TC_RECORD_TYPE::process_name(tree t) {
  std::cerr << "TC_RECORD_TYPE::process_name(";
  //check_type(name(t));
  if (!t)
    return "No Name";
  tree n= name(t);
  NameWrapper name(n);
  const char * pstr= name.resolve();
  std::cerr << "string="<< pstr << "),";
  return pstr;
}

class DefaultVal {
public:
  operator int() { return -1;}
};


class RecordTypeField : public SwitchCall<int,DefaultVal>{
  /*
    handle the type of a field type
  */


public:
  RecordContext * c;
  RecordTypeField(RecordContext * c,tree field):c(c) {
    CallBack::check_type(field);
    call<RecordTypeField>(field);
  }

  int call_type_TYPE_DECL(tree f) {}
  int call_type_FIELD_DECL(tree f) {
    std::cerr << "RecordTypeField::call_type_FIELD_DECL(";
    call_type_ret<CallBack,int>(f, CallBack::finish_type_callback);
    Field fld(f);      
    c->field_begin(fld);
    std::cerr << ")";
  }
};



void TC_RECORD_TYPE::process_fields(RecordContext * c,tree f) {
  std::cerr << "TC_RECORD_TYPE::process_fields(";
  if (!f)
    return;
  while (f) {
    std::cerr << "field(";
    RecordTypeField proc(c,f);
    f = chain(f);
    std::cerr << ");";
  }
  std::cerr << ")";
}
void TC_RECORD_TYPE::finish_type(tree t){
  std::cerr << "TC_RECORD_TYPE::finish_type(";
  RecordContext c;
  introspect_struct<tree_base>((tree_base*)t);
  const char *  n=process_name(t);
  if (strcmp(n,"") == 0)
    return;
  c.record_begin(n);
  process_fields(&c,fields(t));
  c.record_end();
  std::cerr << ")";
}
TC_RECORD_TYPE aTC_RECORD_TYPE;
/////////////////////////////////////////////////////////////////
void TC_RECORD_TYPE::finish_decl (tree t) {cerr << "TC_RECORD_TYPE::finish_decl" << endl;}
void TC_RECORD_TYPE::finish_unit (tree t) {cerr << "TC_RECORD_TYPE::finish_unit" << endl;}
