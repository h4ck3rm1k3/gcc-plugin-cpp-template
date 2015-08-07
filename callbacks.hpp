#pragma once
class CallBack;
#include <vector>

//#include <iostream>
#include <string.h>

#include <gcc-plugin.h>
#include <coretypes.h>
#include <tree.h>

using namespace std;
extern vector < CallBack * >callbacks;

/*
  Each callback object is typed for a specific type.
  We want to lookup the global object and cast them into the right type
*/
template < class TypedCallBack > TypedCallBack * get_typed_callback (tree f)
{

  // get the tree code from the node
  enum tree_code tc = f->typed.base.code;

  // lookup the callback from the table
  CallBack *pT0 = callbacks[tc];

  // cast the callback to the type TypedCallBack
  TypedCallBack *pT = dynamic_cast < TypedCallBack * >(pT0);

  return pT;
}


template < class TypedCallBack, class Ret,
  class T > Ret call_type_ret (tree f, T fn)
{

  // get the TypedCallBack
  TypedCallBack *pT = get_typed_callback < TypedCallBack > (f);

  // call the function with the new typed callback
  return fn (pT, f);
}

/*
  The call back base class implementation
*/
void save_callback (enum tree_code tc, CallBack * self);	// save this

CallBack *lookup_callback (enum tree_code tc);
