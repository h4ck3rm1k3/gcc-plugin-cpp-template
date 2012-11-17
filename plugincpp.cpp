#include <iostream>
#include <vector>

#include <gcc-plugin.h>
#include <coretypes.h>
#include <tree.h>

//class tree_type;
//typedef tree_type * tree;

union tree_node;
typedef union tree_node *tree;

extern "C" void cpp_callbackPLUGIN_FINISH_TYPE (tree t, void *i);
extern "C" void   cpp_callbackPLUGIN_START_UNIT ();
using namespace std;

class CallBack;
vector<CallBack*> callbacks(MAX_TREE_CODES);

class CallBack {
public:

  void check_type(tree f) {
    if (!f)
      return ;

    enum tree_code tc=f->typed.base.code;
    cerr << "check field tc:" << tc << ":";
    cerr << tree_code_name[tc];
    cerr << endl;
  }

  template <class T2,class T > void call_type(tree f, T fn) {
    if (!f)
      return;
    enum tree_code tc=f->typed.base.code;
    CallBack * pT0=  callbacks[tc];
    if (pT0) {
      T2* pT= dynamic_cast<T2*> (pT0);
      fn(pT,f);
    } else {
      cerr << "no callback for field" << endl;
    }
  }

  virtual void finish_type (tree t, void *i){
  cerr << t << "\t"
       << (enum tree_code)t->typed.base.code//tree_base
       << endl;

    cerr << "none" << endl;
  }
};

class TC_IDENTIFIER_NODE;

// processing in the context of a global record object.
class RecordContext {
public:
  //callbacks
  void record_begin(){}
  static void type_name ( TC_IDENTIFIER_NODE * cb,  tree_node* t) ;
  void field_begin() {}
  static void field_name(TC_IDENTIFIER_NODE * cb,  tree_node* t);
  void field_end() {}
  void record_end() {}
};



template <enum tree_code tc> class TCWrapper : public CallBack {
public:
  TCWrapper() {
    cerr << "registerd:"<< tc << " name:" << tree_code_name[tc]<< endl;
    callbacks[tc]=this;   // save this
  };
  virtual  void finish_type (tree t, void *i){
    cerr << "none" << tc<< endl;
  }
};

class TC_IDENTIFIER_NODE  : public TCWrapper<IDENTIFIER_NODE>{
public:
  const char * id_str(tree_node * t){
    return IDENTIFIER_POINTER(t);
  }  
  void id(tree_node * t){
    if (! t)
      return;
    cerr << "ID:"<< id_str(t) << endl;
  };

} aTC_IDENTIFIER_NODE;

class  TC_FIELD_DECL : public  TCWrapper<FIELD_DECL>
{
public :
  tree name(tree t) {
    return DECL_NAME(t);
  }

 void process_name(tree t) {   
    check_type(name(t));
    call_type<TC_IDENTIFIER_NODE>(name(t),RecordContext::field_name);
  }

  static void finish_type_field(TC_FIELD_DECL* self,tree f)
  {
    self->process_name(f);
    cerr << "finish field:" << endl;    
  }
} aTC_FIELD_DECL;

class TC_LABEL_DECL  : public  TCWrapper<LABEL_DECL>{} aTC_LABEL_DECL;
class TC_VOID_TYPE  : public  TCWrapper<VOID_TYPE>{} aTC_VOID_TYPE;


class TC_RECORD_TYPE: public  TCWrapper<RECORD_TYPE>
{
public :
  tree fields(tree t) {
    return TYPE_FIELDS(t);
  }

  tree name(tree t) {
    return TYPE_NAME(t);
  }

 
  void process_name(tree t) {   
    check_type(name(t));
    call_type<TC_IDENTIFIER_NODE>(name(t),RecordContext::type_name);
  }


  void process_field(tree f) {   
    if (!f)
      return;
    check_type(f);
    call_type<TC_FIELD_DECL>(f,TC_FIELD_DECL::finish_type_field);

  }

  virtual void finish_type (tree t, void *i){
    cerr << "Record type begin" << endl;
    process_name(t);
    process_field(fields(t));
    cerr << "Record type end" << endl;
  }

  } aTC_RECORD_TYPE;

void   cpp_callbackPLUGIN_START_UNIT ()
{

}


void cpp_callbackPLUGIN_FINISH_TYPE (tree t, void *i)
{
  CallBack* pT= callbacks[(enum tree_code)t->typed.base.code];

  if (pT) {
    pT->finish_type(t,i);
  } else {
    cerr << "no callback" << endl;
  }

}

void RecordContext::type_name ( TC_IDENTIFIER_NODE * cb,  tree_node* t) {
    //    cerr << "type_name:" << endl;    
    cb->id(t);
  };

void RecordContext::field_name(TC_IDENTIFIER_NODE * cb,  tree_node* t){
  cerr << "field_name:";    
  cb->id(t);  
}
