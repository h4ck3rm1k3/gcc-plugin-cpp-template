#pragma once
#include "tcwrapper.hpp"
/*
 * Field Decl wrapper class 
 */

class  TC_FIELD_DECL : public  TCWrapper<FIELD_DECL>
{
public :
  tree name(tree t);
  const char * process_name(tree t);
  static const char * finish_type_field(TC_FIELD_DECL* self,tree f);
  static long unsigned int  get_offset(TC_FIELD_DECL* self,tree f);
  static long unsigned int  get_bit_offset(TC_FIELD_DECL* self,tree f);
  static long unsigned int  get_bit_size(TC_FIELD_DECL* self,tree f);
  static bool  get_bit_field(TC_FIELD_DECL* self,tree t) { return self->BIT_FIELD_TYPE(t); }

  bool C_BIT_FIELD(tree t);
  tree SIZE (tree t) { return DECL_SIZE(t);}
  long unsigned int SIZE_I (tree t);
  int ALIGN (tree t) { return DECL_ALIGN(t);}
  //

  tree FIELD_CONTEXT(tree t) { return DECL_FIELD_CONTEXT(t);}

  tree FIELD_OFFSET(tree t) { return DECL_FIELD_OFFSET(t);}
  tree FIELD_BIT_OFFSET(tree t) { return DECL_FIELD_BIT_OFFSET(t);}

  long unsigned int FIELD_OFFSET_I(tree t);
  long unsigned int FIELD_BIT_OFFSET_I(tree t);

  tree BIT_FIELD_TYPE(tree t)  { return DECL_BIT_FIELD_TYPE(t);}
  int OFFSET_ALIGN(tree t)  { return DECL_OFFSET_ALIGN(t);}

  bool _DECL_C_BIT_FIELD(tree t){
    //return DECL_C_BIT_FIELD(t);
    return 0;
  }

  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);

};
