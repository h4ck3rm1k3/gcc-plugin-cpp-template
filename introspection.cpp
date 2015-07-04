#include <iostream>
#include <vector>
#include <gcc-plugin.h>
#include <coretypes.h>
#include <tree.h>
#include "record_context.hpp"
#include <string.h>
#include "introspection.hpp"
class Context {};
class Object {};
template <class T> class generic_class_name {
public: 
  generic_class_name(const char * classname, Context c, Object o) {}
};

template <class T> class generic_field_name {
public: 
  generic_field_name(const char * fieldname, Context& c, Object& o, bool bitfield, int offset, int bitoffset, int size) {}
};

template <class T, class F> class generic_field_name2 {
public: 
  generic_field_name2(const char * fieldname, Context& c, Object& o, bool bitfield, int offset, int bitoffset, int size) {}
};

template <class T,class C, class F>  generic_field_name<T> generic_field_name3(const char * fieldname) {}

#define Bx

#define define_generic_class_name(CLASS, NAME)  generic_class_name < CLASS > the_class_name(  NAME  ,context,obj)

#define define_generic_bitfield(CLASS,FLDNAME,NAME,BITFIELD,OFFSET,BITOFFSET,SIZE) generic_field_name<CLASS> field ## FLDNAME ( NAME, context, obj , BITFIELD, OFFSET , BITOFFSET , SIZE )



template <> void introspect_struct<tree_base>(tree_base* t)
{
  Context context;
  Object obj;
  
  define_generic_class_name (tree_base, "tree_base");
  define_generic_bitfield (tree_base,code,"code",1,0,0,16);
  define_generic_bitfield (tree_base,side_effects_flag,"side_effects_flag",1,0,16,1);
  define_generic_bitfield (tree_base,constant_flag,"constant_flag",1,0,17,1);
  define_generic_bitfield (tree_base,addressable_flag,"addressable_flag",1,0,18,1);
  define_generic_bitfield (tree_base,volatile_flag,"volatile_flag",1,0,19,1);
  define_generic_bitfield (tree_base,readonly_flag,"readonly_flag",1,0,20,1);
  define_generic_bitfield (tree_base,unsigned_flag,"unsigned_flag",1,0,21,1);
  define_generic_bitfield (tree_base,asm_written_flag,"asm_written_flag",1,0,22,1);
  define_generic_bitfield (tree_base,nowarning_flag,"nowarning_flag",1,0,23,1);
  define_generic_bitfield (tree_base,used_flag,"used_flag",1,0,24,1);
  define_generic_bitfield (tree_base,nothrow_flag,"nothrow_flag",1,0,25,1);
  define_generic_bitfield (tree_base,static_flag,"static_flag",1,0,26,1);
  define_generic_bitfield (tree_base,public_flag,"public_flag",1,0,27,1);
  define_generic_bitfield (tree_base,private_flag,"private_flag",1,0,28,1);
  define_generic_bitfield (tree_base,protected_flag,"protected_flag",1,0,29,1);
  define_generic_bitfield (tree_base,deprecated_flag,"deprecated_flag",1,0,30,1);
  define_generic_bitfield (tree_base,saturating_flag,"saturating_flag",1,0,31,1);
  define_generic_bitfield (tree_base,default_def_flag,"default_def_flag",1,0,32,1);
  define_generic_bitfield (tree_base,lang_flag_0,"lang_flag_0",1,0,33,1);
  define_generic_bitfield (tree_base,lang_flag_1,"lang_flag_1",1,0,34,1);
  define_generic_bitfield (tree_base,lang_flag_2,"lang_flag_2",1,0,35,1);
  define_generic_bitfield (tree_base,lang_flag_3,"lang_flag_3",1,0,36,1);
  define_generic_bitfield (tree_base,lang_flag_4,"lang_flag_4",1,0,37,1);
  define_generic_bitfield (tree_base,lang_flag_5,"lang_flag_5",1,0,38,1);
  define_generic_bitfield (tree_base,lang_flag_6,"lang_flag_6",1,0,39,1);
  define_generic_bitfield (tree_base,visited,"visited",1,0,40,1);
  define_generic_bitfield (tree_base,packed_flag,"packed_flag",1,0,41,1);
  define_generic_bitfield (tree_base,user_align,"user_align",1,0,42,1);
  define_generic_bitfield (tree_base,nameless_flag,"nameless_flag",1,0,43,1);
  define_generic_bitfield (tree_base,spare,"spare",1,0,44,12);
  define_generic_bitfield (tree_base,address_space,"address_space",1,0,56,8);
  
}
