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
    cerr << "CallBack::check_type( tc=" << tc << ",";
    cerr << " name= " << get_tree_code_name (tc) << ",";
    cerr << " node= " << f;
    cerr << ")";
    //pT->check();
  }
  else{
    cerr << "no callback defined for tc (" << tc << ") ";
    cerr << get_tree_code_name (tc);
  }
  //  cerr << endl;
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
  cerr << "finish type :unhandled pure virtual : ";
  check_type(t);
  cerr << endl;
}

void CallBack::finish_decl (tree t){
  cerr << "finish decl :unhandled pure virtual : ";
  check_type(t);
  cerr << endl;
}

void CallBack::finish_unit (tree t){
  cerr << "finish unit:unhandled pure virtual : ";
  enum tree_code tc=t->typed.base.code;
  cerr << "check field tc (" << tc << ") ";
  cerr << get_tree_code_name (tc) << endl;

}

int CallBack::finish_type_callback(CallBack* c, tree_node* t)
{
  std::cerr << "finish type callback(Callback:" << c << " Node:" << t << ") ";
  CallBack::check_type(t);
  if(c)
    c->finish_type(t);
  std::cerr << std::endl;
}

int CallBack::finish_decl_callback(CallBack* c, tree_node* t)
{
  //std::cerr << "finish decl callback: " << c << " Node:" << t << std::endl;
  //CallBack::check_type(t);
  if(c)
    c->finish_decl(t);
}

int CallBack::finish_unit_callback(CallBack* c, tree_node* t)
{
  //std::cerr << "finish unit callback: " << c << " Node:" << t << std::endl;
  //CallBack::check_type(t);
  if(c)
    c->finish_unit(t);
}

void CallBack::check(){
  std::cerr << "base class" << std::endl;
}
