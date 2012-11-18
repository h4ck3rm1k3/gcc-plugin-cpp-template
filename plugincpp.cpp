#include <iostream>
#include <vector>

#include <gcc-plugin.h>
#include <coretypes.h>
#include <tree.h>
#include "plugincpp.hpp"
#include "RecordContext.hpp"
#include <string.h>

//class tree_type;
//typedef tree_type * tree;

union tree_node;
typedef union tree_node *tree;

extern "C" void cpp_callbackPLUGIN_FINISH_TYPE (tree t, void *i);
extern "C" void   cpp_callbackPLUGIN_START_UNIT ();
using namespace std;

class CallBack;
vector<CallBack*> callbacks(MAX_TREE_CODES);

void CallBack::check_type(tree f) {
  if (!f)
    return ;
  enum tree_code tc=f->typed.base.code;
  // cerr << "check field tc:" << tc << ":";
  // cerr << tree_code_name[tc];
  // cerr << endl;
}

template <class T2,class Ret, class T > Ret CallBack::call_type_ret(tree f, T fn) {
  enum tree_code tc=f->typed.base.code;
  CallBack * pT0=  callbacks[tc];
  T2* pT= dynamic_cast<T2*> (pT0);
  return fn(pT,f);
}

template <class T2,class T > void CallBack::call_type(tree f, T fn) {
    enum tree_code tc=f->typed.base.code;
    CallBack * pT0=  callbacks[tc];
    T2* pT= dynamic_cast<T2*> (pT0);
    fn(pT,f);
}

class TC_IDENTIFIER_NODE;

// processing in the context of a global record object.



const char * TC_IDENTIFIER_NODE::id_str(tree_node * t){
  return IDENTIFIER_POINTER(t);
}  

const char * TC_IDENTIFIER_NODE::id(tree_node * t){
  if (! t)
    return "NULL";
  return id_str(t);
};

TC_IDENTIFIER_NODE aTC_IDENTIFIER_NODE;


tree TC_FIELD_DECL::name(tree t) {
  return DECL_NAME(t);
}

const char * TC_FIELD_DECL::process_name(tree t) {   
  //    check_type(name(t));
  if (!t)
    return "No Name";
  
  tree n= name(t);
  if (n) 
    return call_type_ret<TC_IDENTIFIER_NODE,const char *>(n,RecordContext::field_name);
  else
    return "No Name2";
}

const char * TC_FIELD_DECL::finish_type_field(TC_FIELD_DECL* self,tree f)
{
  return self->process_name(f);
}

TC_FIELD_DECL aTC_FIELD_DECL;

TC_LABEL_DECL  aTC_LABEL_DECL;
TC_VOID_TYPE  aTC_VOID_TYPE;

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
  //    check_type(name(t));
  if (!t)
    return "No Name";
  tree n= name(t);
  if (n) 
    return call_type_ret<TC_IDENTIFIER_NODE, const char *>(n,RecordContext::type_name);
  else
    return "";
}

void TC_RECORD_TYPE::process_field(RecordContext * c,tree f) {   
  if (!f)
    return;
  //    check_type(f); // type of the field
  while (f) {
    const char * n=call_type_ret<TC_FIELD_DECL,const char *>(f,TC_FIELD_DECL::finish_type_field);
    c->field_begin(n);
    f = chain(f);
  }  
}

void TC_RECORD_TYPE::finish_type (tree t, void *i){
  RecordContext c;
  const char *  n=process_name(t);
  if (strcmp(n,"") == 0)
    return;
  c.record_begin(n);
  //    cerr << "Record type begin" << endl;
  process_field(&c,fields(t));
  //    cerr << "Record type end" << endl;
  c.record_end();
}
TC_RECORD_TYPE aTC_RECORD_TYPE;

void cpp_callbackPLUGIN_START_UNIT ()
{

}

void cpp_callbackPLUGIN_FINISH_TYPE (tree t, void *i)
{
  CallBack* pT= callbacks[(enum tree_code)t->typed.base.code];

  if (pT) {
    pT->finish_type(t,i);
  } else {
    //    cerr << "no callback" << endl;
  }
  
}

void CallBack::save_callback(enum tree_code tc,CallBack * self)   // save this
{
  callbacks[tc]=self;
}

CallBack::CallBack(){}
CallBack::~CallBack(){}

void CallBack::finish_type (tree t, void *i){}

//RecordContext::type_name(TC_IDENTIFIER_NODE*, tree_node*)

