#include <iostream>
#include "callbacks.hpp"

void save_callback(enum tree_code tc,CallBack * self)   // save this
{
  std::cerr << "save callback tc (" << tc << ") ";
  std::cerr << get_tree_code_name (tc);
  std::cerr << "self (" << self << ")\n";
  ///self->check();

  callbacks[tc]=self;
}

CallBack * lookup_callback(enum tree_code tc){
  return callbacks[tc];
}
