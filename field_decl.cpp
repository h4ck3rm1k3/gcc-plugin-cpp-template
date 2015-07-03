/////////////////////////////////////////////////////////////////
// FIELD_DECL
/////////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>
#include <gcc-plugin.h>
#include <coretypes.h>
#include <tree.h>
#include "plugincpp.hpp"
#include "switchcall.hpp"
#include "name.hpp"

tree TC_FIELD_DECL::name(tree t) {
  return DECL_NAME(t);
}

const char * TC_FIELD_DECL::process_name(tree t) {
  //std::cerr << "process_name " << std::endl;

  tree n= name(t);
  //check_type(n);
  if (!t)
    return "No Name";

  if (n)
    {
      NameWrapper name(n);
      return name.resolve();
    }
  else
    return "No Name2";
}
const char * TC_FIELD_DECL::finish_type_field(TC_FIELD_DECL* self,tree f)
{
  //std::cerr << "finish_type_field" << std::endl;
  const char * r= self->process_name(f);
  //std::cerr << "got name" << r << std::endl;
  return r;

}

double_int TC_FIELD_DECL::get_offset(TC_FIELD_DECL* self,tree f) {
  //std::cerr << "TC_FIELD_DECL::get_offset" << std::endl;
  check_type(f);
  return self->FIELD_OFFSET_I(f);
}

double_int TC_FIELD_DECL::get_bit_offset(TC_FIELD_DECL* self,tree f) {
  return self->FIELD_BIT_OFFSET_I(f);
}

double_int TC_FIELD_DECL::get_bit_size(TC_FIELD_DECL* self,tree f) {
  //  return 1; //TODO:
  return self->SIZE_I(f);
}

TC_FIELD_DECL aTC_FIELD_DECL;
