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
    // cerr << "check field tc:" << tc << ":";
    // cerr << tree_code_name[tc];
    // cerr << endl;
  }

  template <class T2,class Ret, class T > Ret call_type_ret(tree f, T fn) {
    enum tree_code tc=f->typed.base.code;
    CallBack * pT0=  callbacks[tc];
    T2* pT= dynamic_cast<T2*> (pT0);
    return fn(pT,f);
  }

  template <class T2,class T > void call_type(tree f, T fn) {
    enum tree_code tc=f->typed.base.code;
    CallBack * pT0=  callbacks[tc];
    T2* pT= dynamic_cast<T2*> (pT0);
     fn(pT,f);
  }

  virtual void finish_type (tree t, void *i){
  }
};

class TC_IDENTIFIER_NODE;

// processing in the context of a global record object.
class RecordContext {
  static int classcount;
  const char * class_name;
public:
  //callbacks
  void record_begin(const char * pname);

  static const char * type_name ( TC_IDENTIFIER_NODE * cb,  tree_node* t) ;
  void field_begin(const char * name);
  static const char * field_name(TC_IDENTIFIER_NODE * cb,  tree_node* t);
  void field_end() ;
  void record_end() ;
};



template <enum tree_code tc> class TCWrapper : public CallBack {
public:
  TCWrapper() {
    callbacks[tc]=this;   // save this
  };
  virtual  void finish_type (tree t, void *i){
  }
};

class TC_IDENTIFIER_NODE  : public TCWrapper<IDENTIFIER_NODE>{
public:
  const char * id_str(tree_node * t){
    return IDENTIFIER_POINTER(t);
  }  
  const char * id(tree_node * t){
    if (! t)
      return "NULL";
    return id_str(t);
  };

} aTC_IDENTIFIER_NODE;

class  TC_FIELD_DECL : public  TCWrapper<FIELD_DECL>
{
public :
  tree name(tree t) {
    return DECL_NAME(t);
  }

  const char * process_name(tree t) {   
   //    check_type(name(t));
    if (!t)
      return "No Name";
    
    tree n= name(t);
    if (n) 
      return call_type_ret<TC_IDENTIFIER_NODE,const char *>(n,RecordContext::field_name);
    else
      return "No Name2";
  }

  static const char * finish_type_field(TC_FIELD_DECL* self,tree f)
  {
    return self->process_name(f);
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

  tree chain(tree t) {
    return TREE_CHAIN(t);
  }

  const char * process_name(tree t) {   
    //    check_type(name(t));
    if (!t)
      return "No Name";
        tree n= name(t);
    if (n) 
      return call_type_ret<TC_IDENTIFIER_NODE, const char *>(n,RecordContext::type_name);
    else
      return "";
  }

  void process_field(RecordContext & c,tree f) {   
    if (!f)
      return;


    //    check_type(f); // type of the field
    while (f) {
      const char * n=call_type_ret<TC_FIELD_DECL,const char *>(f,TC_FIELD_DECL::finish_type_field);
      c.field_begin(n);
      f = chain(f);
    }

  }

  virtual void finish_type (tree t, void *i){

    RecordContext c;

    const char *  n=process_name(t);
    if (strcmp(n,"") == 0)
      return;

    c.record_begin(n);

    //    cerr << "Record type begin" << endl;
      
    process_field(c,fields(t));
    //    cerr << "Record type end" << endl;

    c.record_end();
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
    //    cerr << "no callback" << endl;
  }

}

///////////////////////////////////////////////////////////////

// decorator::

void RecordContext::record_begin(const char * pname){
  class_name=pname;
  cout << "class CLS_" << classcount++ << "_";

  if (pname) {
    cout << pname ;
  }  else  {
    cout << "unnamed" ;
  }
  cout << "{ " << endl;
  cout << "\t generic_class_name <" << "\"" <<  pname << "\"," << pname << ">" << " the_class_name;"<< endl;      

}

const char *  RecordContext::type_name ( TC_IDENTIFIER_NODE * cb,  tree_node* t) {
  const char * n= cb->id(t);
  //  cerr << "type_name:" << n<< endl;    
  return n;
};

const char * RecordContext::field_name(TC_IDENTIFIER_NODE * cb,  tree_node* t){
  const char * n= cb->id(t);  
  return n;
}

void RecordContext::field_begin(const char * name){
  cout << "\t generic_field_name <\"" 
       <<  name 
       << "\"," 
       << class_name        << "," 
       << name            
       << "> " <<  name << ";" << endl;      
}

void RecordContext::record_end(){
  cout << "}; " << endl;
}

int RecordContext::classcount=0;
