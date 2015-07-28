#include <iostream>
#include "callbacks.hpp"

/*
  save a callback object for treecode.
*/
void save_callback(enum tree_code tc,CallBack * self)   // save this
{
  // std::cerr << "save callback tc (" << tc << ") ";
  // std::cerr << get_tree_code_name (tc);
  // std::cerr << "self (" << self << ")\n";
  // ///self->check();
  callbacks[tc]=self;
}

/*
  look up a callback object for a tree code.
*/
CallBack * lookup_callback(enum tree_code tc){
  return callbacks[tc];
}
