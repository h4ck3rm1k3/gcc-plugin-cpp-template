/*
 *
*/
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

/*
  entry points from the c plugin
*/
extern "C" void   cpp_callbackPLUGIN_START_UNIT ();
void cpp_callbackPLUGIN_START_UNIT ()
{
}

extern "C" void cpp_callbackPLUGIN_FINISH_TYPE (tree t, void *i);
void cpp_callbackPLUGIN_FINISH_TYPE (tree t, void *i)
{
  int x= CallBack::call_type_ret_static <CallBack,int>(
                   t,
                   CallBack::finish_type_callback
                   );
}

/*
  The call back base class implementation
*/
void CallBack::save_callback(enum tree_code tc,CallBack * self)   // save this
{
  cerr << "save callback tc (" << tc << ") ";
  cerr << get_tree_code_name (tc);
  cerr << "self (" << self << ")\n";
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


template <class T2,class T > void CallBack::call_type(tree f, T fn) {
    enum tree_code tc=f->typed.base.code;
    CallBack * pT0=  callbacks[tc];
    T2* pT= dynamic_cast<T2*> (pT0);
    fn(pT,f);
}

void CallBack::finish_type (tree t){
  cerr << "unhandled pure virtual" << endl;
}

int CallBack::finish_type_callback(CallBack* c, tree_node* t)
{
  //  CallBack::check_type(t);
  if(c)
    c->finish_type(t);
}
