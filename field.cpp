#include <iostream>
#include <vector>
#include <gcc-plugin.h>
#include <coretypes.h>
#include <tree.h>
#include "field.hpp"
#include "tree-nodes/field_decl.hpp"
#include "owl/struct.hpp"

void
Field::process (tree f)
{
  name =
    call_type_ret < TC_FIELD_DECL, const char *>(f,
						 TC_FIELD_DECL::
						 finish_type_field);
  offset =
    call_type_ret < TC_FIELD_DECL, long unsigned int >(f,
						       TC_FIELD_DECL::
						       get_offset);
  bit_offset =
    call_type_ret < TC_FIELD_DECL, long unsigned int >(f,
						       TC_FIELD_DECL::
						       get_bit_offset);
  bit_size =
    call_type_ret < TC_FIELD_DECL, long unsigned int >(f,
						       TC_FIELD_DECL::
						       get_bit_size);
  bit_field =
    call_type_ret < TC_FIELD_DECL, bool > (f, TC_FIELD_DECL::get_bit_field);
}


namespace gcc 
{
  
  template<> void Struct::field_begin (Field fld)
  {
    FieldDecl f (fld, this);
  }
  
}

