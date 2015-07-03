#pragma once
#include "callbacks.hpp"

/*
* Exception class
*/
class MismatchedType{};

class CallBack {
public:
  CallBack();
  virtual ~CallBack();
  static void check_type(tree f);
  virtual void check() {
    std::cerr << "base class" << std::endl;
  }
  //template <class EXPECTED_NODE_TYPE,class EXPECTED_RETURN_TYPE, class METHOD_TO_CALL > EXPECTED_RETURN_TYPE call_type_ret(tree f, METHOD_TO_CALL fn);
  //template <class EXPECTED_NODE_TYPE,class METHOD_TO_CALL > void call_type(tree f, METHOD_TO_CALL fn);
  static int finish_type_callback (CallBack *self, tree t);

  /**
   * check node type in the base class always returns true because no type is specified. 
   * this method is designed to be called statically in the subclasses given a type expected and some node.
   */
  static bool check_node(tree f) {
    return true;
  }
      
  /*
  template <class EXPECTED_NODE_TYPE,class EXPECTED_RETURN_TYPE, class METHOD_TO_CALL > static EXPECTED_RETURN_TYPE call_type_ret_static(tree t, METHOD_TO_CALL fn){
    if (!EXPECTED_NODE_TYPE::check_node(t)) {
      throw MismatchedType();
    }
            
    CallBack* pT= CallBack::lookup_callback((tree_code)t->typed.base.code);
    if (pT) {
      //std::cerr << "going to call back " << (tree_code)t->typed.base.code << " : ";
      //cerr << get_tree_code_name ((tree_code)t->typed.base.code );
      //cerr << std::endl;
      EXPECTED_RETURN_TYPE r= call_type_ret<EXPECTED_NODE_TYPE,EXPECTED_RETURN_TYPE>(t,fn);
      return r;
    } else {
      //std::cerr << "no callback found" << (tree_code)t->typed.base.code << " : ";
      //cerr << get_tree_code_name ((tree_code)t->typed.base.code );
      //cerr << std::endl;
    } 
  }
  */
  
  virtual void finish_type (tree t);
  //void save_callback(enum tree_code tc,CallBack * self);   // save this
  //static CallBack * lookup_callback(enum tree_code tc);   // lookup
};
