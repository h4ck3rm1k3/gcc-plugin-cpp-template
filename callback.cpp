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

CallBack::CallBack ()
{
}

CallBack::~CallBack ()
{
}

void
CallBack::check_type (tree f)
{
  if (!f)
    return;
  enum tree_code tc = f->typed.base.code;
  CallBack *pT = callbacks[tc];

  if (pT)
    {
      cerr << "ct(\"" << get_tree_code_name (tc) << "\")";
    }
  else
    {
      cerr << "no callback defined for tc (" << tc << ") ";
      cerr << get_tree_code_name (tc);
    }
  //  cerr << endl;
}

void
CallBack::finish_type (tree t)
{
  cerr << "finish type :unhandled pure virtual : ";
  check_type (t);
  cerr << endl;
}

void
CallBack::finish_decl (tree t)
{
  cerr << "finish decl :unhandled pure virtual : ";
  check_type (t);
  cerr << endl;
}

void
CallBack::finish_unit (tree t)
{
  cerr << "finish unit:unhandled pure virtual : ";
  enum tree_code tc = t->typed.base.code;
  cerr << "check field tc (" << tc << ") ";
  cerr << get_tree_code_name (tc) << endl;

}

void
CallBack::check ()
{
  std::cerr << "base class" << std::endl;
}

int
CallBack::finish_type_callback (CallBack * c, tree_node * t)
{
  std::cerr << "CallBack::finish_type_callback(";
  CallBack::check_type (t);
  if (c)
    {
      std::cerr << ",call(finish_type(";
      c->finish_type (t);
      std::cerr << "))";
    }
  std::cerr << ")";
}

int
CallBack::finish_decl_callback (CallBack * c, tree_node * t)
{
  std::
    cerr << "CallBack::finish_decl_callback(CallBack:" << c << ",Node:" << t;
  CallBack::check_type (t);
  // if(c) c->finish_decl(t);
  cerr << ")";
}

int
CallBack::finish_unit_callback (CallBack * c, tree_node * t)
{
  std::cerr << "finish unit callback: " << c << " Node:" << t;
  CallBack::check_type (t);
  //if(c) c->finish_unit(t);
}
