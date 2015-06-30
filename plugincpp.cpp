#include <iostream>
#include <vector>
#include <gcc-plugin.h>
#include <coretypes.h>
#include <tree.h>
#include "plugincpp.hpp"
#include "record_context.hpp"
#include <string.h>
#include "introspection.hpp"
using namespace std;

union tree_node;
typedef union tree_node *tree;

extern "C" void cpp_callbackPLUGIN_FINISH_TYPE (tree t, void *i);
extern "C" void   cpp_callbackPLUGIN_START_UNIT ();

/////////////////////////////////////////////////////////////////
class CallBack;
vector<CallBack*> callbacks(MAX_TREE_CODES);
void CallBack::save_callback(enum tree_code tc,CallBack * self)   // save this
{
  //cerr << "save callback tc (" << tc << ") ";
  //cerr << get_tree_code_name (tc);
  //cerr << "self (" << self << ")\n";
  ///self->check();

  callbacks[tc]=self;
}

CallBack * CallBack::lookup_callback(enum tree_code tc){
  return callbacks[tc];
}

CallBack::CallBack(){}
CallBack::~CallBack(){}

void CallBack::check_type(tree f) {
  if (!f)
    return ;
  enum tree_code tc=f->typed.base.code;
  CallBack * pT=  callbacks[tc];
  if (pT){
    //cerr << "check field tc (" << tc << ") ";
    //cerr << get_tree_code_name (tc);
    //cerr << "PT (" << pT << ") ";
    //pT->check();
  }
  //cerr << endl;
}

template <class T2,class Ret, class T > Ret CallBack::call_type_ret(tree f, T fn) {

  // get the tree code from the node
  enum tree_code tc=f->typed.base.code;

  // lookup the callback from the table
  CallBack * pT0=  callbacks[tc];

  // cast the callback to the type T2
  T2* pT= dynamic_cast<T2*> (pT0);

  // call the function with the new typed callback
  return fn(pT,f);
}

template <class T2,class T > void CallBack::call_type(tree f, T fn) {
    enum tree_code tc=f->typed.base.code;
    CallBack * pT0=  callbacks[tc];
    T2* pT= dynamic_cast<T2*> (pT0);
    fn(pT,f);
}

/////////////////////////////////////////////////////////////////
/// IDENTIFIER_NODE
/////////////////////////////////////////////////////////////////

class TC_IDENTIFIER_NODE;
const char * TC_IDENTIFIER_NODE::id_str(tree_node * t){
  check_type(t);
  const char * s = IDENTIFIER_POINTER(t);
  return s;

}

const char * TC_IDENTIFIER_NODE::id(tree_node * t){
  if (! t)
    return "NULL";
  return id_str(t);
};

TC_IDENTIFIER_NODE aTC_IDENTIFIER_NODE;

/////////////////////////////////////////////////////////////////
// FIELD_DECL
/////////////////////////////////////////////////////////////////

tree TC_FIELD_DECL::name(tree t) {
  return DECL_NAME(t);
}

const char * TC_FIELD_DECL::process_name(tree t) {
  //std::cerr << "process_name " << std::endl;

  tree n= name(t);
  //check_type(n);
  if (!t)
    return "No Name";

  if (n)
    {
      NameWrapper name(n);
      return name.resolve();
    }
  else
    return "No Name2";
}
const char * TC_FIELD_DECL::finish_type_field(TC_FIELD_DECL* self,tree f)
{
  //std::cerr << "finish_type_field" << std::endl;
  const char * r= self->process_name(f);
  //std::cerr << "got name" << r << std::endl;
  return r;

}

double_int TC_FIELD_DECL::get_offset(TC_FIELD_DECL* self,tree f) {
  //std::cerr << "TC_FIELD_DECL::get_offset" << std::endl;
  check_type(f);
  return self->FIELD_OFFSET_I(f);
}

double_int TC_FIELD_DECL::get_bit_offset(TC_FIELD_DECL* self,tree f) {
  return self->FIELD_BIT_OFFSET_I(f);
}

double_int TC_FIELD_DECL::get_bit_size(TC_FIELD_DECL* self,tree f) {
  //  return 1; //TODO:
  return self->SIZE_I(f);
}

// TODO, not implemented yet
bool BIT_FIELD_EXPR (int word, int value, int pos, int width) {
  //return word & (-1u >> (BS(word) - width) << pos) | (((unsigned word)value & (-1u >> (BS(word) - width)) << pos));
  return false;
}

TC_FIELD_DECL aTC_FIELD_DECL;

/////////////////////////////////////////////////////////////////
TC_LABEL_DECL  aTC_LABEL_DECL;
/////////////////////////////////////////////////////////////////
TC_VOID_TYPE  aTC_VOID_TYPE;

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
  //std::cerr << "TC_RECORD_TYPE::process_name" << std::endl;
  check_type(name(t));
  if (!t)
    return "No Name";
  tree n= name(t);

  NameWrapper name(n);
  return name.resolve();

}
void TC_RECORD_TYPE::process_fields(RecordContext * c,tree f) {
  if (!f)
    return;
  while (f) {
    if (TC_FIELD_DECL::check_node(f)) {
        Field fld;
        fld.name=call_type_ret<TC_FIELD_DECL,const char *>(f,TC_FIELD_DECL::finish_type_field);
        fld.offset=call_type_ret<TC_FIELD_DECL,double_int>(f,TC_FIELD_DECL::get_offset).low;
        fld.bit_offset=call_type_ret<TC_FIELD_DECL,double_int>(f,TC_FIELD_DECL::get_bit_offset).low;
        fld.bit_size  =call_type_ret<TC_FIELD_DECL,double_int>(f,TC_FIELD_DECL::get_bit_size).low;
        fld.bit_field  =call_type_ret<TC_FIELD_DECL,bool>(f,TC_FIELD_DECL::get_bit_field);
        c->field_begin(fld);
      }
    f = chain(f);
  }
}
void TC_RECORD_TYPE::finish_type (tree t){
  RecordContext c;
  introspect_struct<tree_base>((tree_base*)t);
  const char *  n=process_name(t);
  if (strcmp(n,"") == 0)
    return;
  c.record_begin(n);
  process_fields(&c,fields(t));
  c.record_end();
}
TC_RECORD_TYPE aTC_RECORD_TYPE;
/////////////////////////////////////////////////////////////////

void cpp_callbackPLUGIN_START_UNIT ()
{

}

void cpp_callbackPLUGIN_FINISH_TYPE (tree t, void *i)
{
  int x= CallBack::call_type_ret_static<CallBack,int>(t,CallBack::finish_type_callback);
  /*
  */
}
/////////////////////////////////////////////////////////////////

void CallBack::finish_type (tree t){
  cerr << "unhandled pure virtual" << endl;
}

int CallBack::finish_type_callback(CallBack* c, tree_node* t)
{
  //  CallBack::check_type(t);
  if(c)
    c->finish_type(t);
}


const char * NameWrapper::call_type(TC_IDENTIFIER_NODE a,tree b){
  return "NAME:ID";
}

const char * NameWrapper::call_type(TC_TYPE_DECL a,tree b){
  return "NAME:TYPE";
}

const char * NameWrapper::call_type(TC_RECORD_TYPE a,tree b){
  return "NAME:RECORD";
}
