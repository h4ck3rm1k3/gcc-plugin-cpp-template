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
  virtual void check();
    //std::cerr << "base class" << std::endl;
  
  static int finish_type_callback (CallBack *self, tree t);
  static int finish_decl_callback (CallBack *self, tree t);

  /**
   * check node type in the base class always returns true because no type is specified. 
   * this method is designed to be called statically in the subclasses given a type expected and some node.
   */
  static bool check_node(tree f) {
    return true;
  }
     
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
};
