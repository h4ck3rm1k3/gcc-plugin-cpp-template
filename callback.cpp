/*
 *
*/
#include <iostream>
#include <vector>
#include <gcc-plugin.h>
#include <coretypes.h>
#include <tree.h>
#include "record_context.hpp"
#include <string.h>
#include "introspection.hpp"
#include "callback.hpp"
#include "callbacks.hpp"
using namespace std;

union tree_node;
typedef union tree_node *tree;

CallBack::CallBack(){}
CallBack::~CallBack(){}

void CallBack::check_type(tree f) {
  if (!f)
    return ;
  enum tree_code tc=f->typed.base.code;
  CallBack * pT=  callbacks[tc];
  
  if (pT){
    cerr << "check field tc (" << tc << ") ";
    cerr << get_tree_code_name (tc);
    cerr << " callback object (" << pT << ") ";
    //pT->check();
  }
  else{
    cerr << "no callback defined for tc (" << tc << ") ";
    cerr << get_tree_code_name (tc);
  }
  cerr << endl;
}


/*
template <class T2,class T > void CallBack::call_type(tree f, T fn) {
    enum tree_code tc=f->typed.base.code;
    CallBack * pT0=  callbacks[tc];
    T2* pT= dynamic_cast<T2*> (pT0);
    fn(pT,f);
}
*/
void CallBack::finish_type (tree t){
  cerr << "unhandled pure virtual" << endl;
}

void CallBack::finish_decl (tree t){
  cerr << "unhandled pure virtual" << endl;
}

int CallBack::finish_type_callback(CallBack* c, tree_node* t)
{
  std::cerr << "finish type callback: " << c << " Node:" << t << std::endl;
  CallBack::check_type(t);
  if(c)
    c->finish_type(t);
}

int CallBack::finish_decl_callback(CallBack* c, tree_node* t)
{
  std::cerr << "finish decl callback: " << c << " Node:" << t << std::endl;
  CallBack::check_type(t);
  if(c)
    c->finish_decl(t);
}
