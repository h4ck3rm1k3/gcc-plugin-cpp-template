#pragma once
#include <iostream>
#include "callback.hpp"

template <enum tree_code tc> class TCWrapper : public CallBack {
public:
  TCWrapper() {
    save_callback(tc,this);
  };

  const enum tree_code t_code() const { return tc; }
  static const enum tree_code t_code_c=tc;
  
  virtual void check() {
    std::cerr << "wrapper class for type (";
    std::cerr << tc;
    std::cerr << ",";
    std::cerr << get_tree_code_name (tc);
    std::cerr << ") ";    
    std::cerr << std::endl;
  }
  static bool check_node(tree f) {
    enum tree_code atc=f->typed.base.code;
    // std::cerr << "check type "
    //           << get_tree_code_name (atc)
    //           << " vs type "
    //           << get_tree_code_name (tc)
    //           << std::endl;
    return atc == tc;
  }

  virtual tree_code get_treecode() { return tc; }

};
