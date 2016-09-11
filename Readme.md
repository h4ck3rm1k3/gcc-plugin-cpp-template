# Flow of function calls

1. plugin.cpp has the entry point, plugin_init.
2. register_special_plugins calls a macro *DEFEVENTSPECIAL* which
registers a set of callbacks with the pattern generic_callback_*NAME* which
were created as external c callbacks for an older version of GCC.
3. plugincpp.cpp contains the c++ side of the code.
4. cpp_callbackPLUGIN_FINISH_TYPE is the entry point
It calls into the finish type callback CallBack::finish_type_callback method that then delegates the function
to a derived class via a virtual callback.
the method *finish_type* is delegated based on the type.

4.1 Each type of node that you want to derive from is created by deriving from
TCWrapper with the enum value as a parameter.

an example of the node :

    class TC_IDENTIFIER_NODE  : public TCWrapper<IDENTIFIER_NODE> ...

finish a type field:

       virtual void finish_type (tree t);

uses the Debian package for the gcc plugin gcc-5-plugin-dev
and the header file /usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/gcc-plugin.h

# Ideas
1. Serialize the tree on finalise. Be able to load trees on startup on empty
files.
2. Template base switch expressions. base class for created derived classes to
   represent expressions that will have all types in a switch statement that
   you derive from.

## TODO types

  OFFSET_TYPE
  BOOLEAN_TYPE
  INTEGER_TYPE
  REAL_TYPE
  POINTER_TYPE
  REFERENCE_TYPE
  NULLPTR_TYPE
  FIXED_POINT_TYPE
  COMPLEX_TYPE
  VECTOR_TYPE
  ARRAY_TYPE
  RECORD_TYPE
  UNION_TYPE
  QUAL_UNION_TYPE
  VOID_TYPE
  FUNCTION_TYPE
  METHOD_TYPE
  LANG_TYPE
  UNCONSTRAINED_ARRAY_TYPE
  TYPENAME_TYPE
  TYPEOF_TYPE
  DECLTYPE_TYPE
  UNDERLYING_TYPE
  CLASS_INTERFACE_TYPE
  CLASS_IMPLEMENTATION_TYPE
  CATEGORY_INTERFACE_TYPE
  CATEGORY_IMPLEMENTATION_TYPE
  PROTOCOL_INTERFACE_TYPE

## DEBUG

debug in gdb like this :
    
    gdb --args /usr/bin/g++-5 -fplugin=./.libs/template_plugin.so tests/plugincpp_test_template.cpp
    
and then in gdb :
    set follow-fork-mode child

# Core files

# core files are created at the end of the compilation.
they can be used like this 

    gdb /usr/lib/gcc/x86_64-linux-gnu/5/cc1plus -c core.finish_unit.0.testplugin

## Global data access
   http://gcc-python-plugin.readthedocs.io/en/latest/basics.html#global-data-access

### gcc.get_variables()

### all_translation_units

all_translation_units is a global

p *(tree_node*)all_translation_units[0].m_vecdata