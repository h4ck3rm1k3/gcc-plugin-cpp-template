#include <iostream>
#include <vector>
#include <gcc-plugin.h>
#include <coretypes.h>
#include <tree.h>
#include "plugincpp.hpp"
#include "RecordContext.hpp"
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
  generic_field_name(const char * fieldname, Context& c, Object& o, int offset, int bitoffset, int size) {}
};

template <class T, class F> class generic_field_name2 {
public: 
  generic_field_name2(const char * fieldname, Context& c, Object& o, int offset, int bitoffset, int size) {}
};

template <class T,class C, class F>  generic_field_name<T> generic_field_name3(const char * fieldname) {}



template <> void introspect_struct<tree_base>(tree_base* t)
{
  Context context;
  Object obj;
  generic_class_name <tree_base> the_class_name("tree_base",context,obj);
  
  
  generic_field_name <tree_base> code("code",context,obj,0,0,16);
  generic_field_name <tree_base> side_effects_flag("side_effects_flag",context,obj,0,16,1);
  generic_field_name <tree_base> constant_flag("constant_flag",context,obj,0,17,1);
  generic_field_name <tree_base> addressable_flag("addressable_flag",context,obj,0,18,1);
  generic_field_name <tree_base> volatile_flag("volatile_flag",context,obj,0,19,1);
  generic_field_name <tree_base> readonly_flag("readonly_flag",context,obj,0,20,1);
  generic_field_name <tree_base> unsigned_flag("unsigned_flag",context,obj,0,21,1);
  generic_field_name <tree_base> asm_written_flag("asm_written_flag",context,obj,0,22,1);
  generic_field_name <tree_base> nowarning_flag("nowarning_flag",context,obj,0,23,1);
  generic_field_name <tree_base> used_flag("used_flag",context,obj,0,24,1);
  generic_field_name <tree_base> nothrow_flag("nothrow_flag",context,obj,0,25,1);
  generic_field_name <tree_base> static_flag("static_flag",context,obj,0,26,1);
  generic_field_name <tree_base> public_flag("public_flag",context,obj,0,27,1);
  generic_field_name <tree_base> private_flag("private_flag",context,obj,0,28,1);
  generic_field_name <tree_base> protected_flag("protected_flag",context,obj,0,29,1);
  generic_field_name <tree_base> deprecated_flag("deprecated_flag",context,obj,0,30,1);
  generic_field_name <tree_base> saturating_flag("saturating_flag",context,obj,0,31,1);
  generic_field_name <tree_base> default_def_flag("default_def_flag",context,obj,0,32,1);
  generic_field_name <tree_base> lang_flag_0("lang_flag_0",context,obj,0,33,1);
  generic_field_name <tree_base> lang_flag_1("lang_flag_1",context,obj,0,34,1);
  generic_field_name <tree_base> lang_flag_2("lang_flag_2",context,obj,0,35,1);
  generic_field_name <tree_base> lang_flag_3("lang_flag_3",context,obj,0,36,1);
  generic_field_name <tree_base> lang_flag_4("lang_flag_4",context,obj,0,37,1);
  generic_field_name <tree_base> lang_flag_5("lang_flag_5",context,obj,0,38,1);
  generic_field_name <tree_base> lang_flag_6("lang_flag_6",context,obj,0,39,1);
  generic_field_name <tree_base> visited("visited",context,obj,0,40,1); //t.visited;
  generic_field_name <tree_base> packed_flag("packed_flag",context,obj,0,41,1);
  generic_field_name <tree_base> user_align("user_align",context,obj,0,42,1);
  generic_field_name <tree_base> nameless_flag("nameless_flag",context,obj,0,43,1);
  generic_field_name <tree_base> spare("spare",context,obj,0,44,12);
  generic_field_name <tree_base> address_space("address_space",context,obj,0,56,8);
  
}
