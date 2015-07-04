
#include <iostream>
#include <vector>
#include <gcc-plugin.h>
#include <coretypes.h>
#include <tree.h>

#include "translation_unit_decl.hpp"


void TC_TRANSLATION_UNIT_DECL::finish_unit(tree t){
  cerr << "TC_TRANSLATION_UNIT_DECL: " << t << endl;

  tree ty = TREE_TYPE(t);
  if (ty) {
    call_type_ret<CallBack,int>(ty,
                                CallBack::finish_unit_callback);
  }
  
  t = TREE_CHAIN(t);
  while (t) {
    call_type_ret<CallBack,int>(t,
                                CallBack::finish_unit_callback);
    t = TREE_CHAIN(t);
  }
}

TC_TRANSLATION_UNIT_DECL::TC_TRANSLATION_UNIT_DECL():
  TCWrapper<TRANSLATION_UNIT_DECL>(){
  //cerr << "Init TRANSLATION_UNIT" << TRANSLATION_UNIT_DECL << " tst "<<  t_code() <<endl;
  
  //save_callback(TRANSLATION_UNIT_DECL,this);
}

TC_TRANSLATION_UNIT_DECL aTC_TRANSLATION_UNIT_DECL;
