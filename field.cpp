#include <iostream>
#include <vector>
#include <gcc-plugin.h>
#include <coretypes.h>
#include <tree.h>
#include "field.hpp"
#include "field_decl.hpp"


void Field::process(tree f) {
  name=call_type_ret<TC_FIELD_DECL,const char *>(f,TC_FIELD_DECL::finish_type_field);
  offset=call_type_ret<TC_FIELD_DECL,double_int>(f,TC_FIELD_DECL::get_offset).low;
  bit_offset=call_type_ret<TC_FIELD_DECL,double_int>(f,TC_FIELD_DECL::get_bit_offset).low;
  bit_size  =call_type_ret<TC_FIELD_DECL,double_int>(f,TC_FIELD_DECL::get_bit_size).low;
  bit_field  =call_type_ret<TC_FIELD_DECL,bool>(f,TC_FIELD_DECL::get_bit_field);
}
