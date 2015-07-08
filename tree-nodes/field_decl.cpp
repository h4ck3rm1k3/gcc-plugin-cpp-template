/////////////////////////////////////////////////////////////////
// FIELD_DECL
/////////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>
#include <gcc-plugin.h>
#include <coretypes.h>
#include <tree.h>
#include "switchcall.hpp"
#include "name.hpp"
//#include "cp/cp-tree.h"

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
  std::cerr << "finish_type_field(";
  const char * r= self->process_name(f);
  std::cerr << "name=" << r <<")" <<std::endl;
  return r;

}

long unsigned int TC_FIELD_DECL::get_offset(TC_FIELD_DECL* self,tree f) {
  //std::cerr << "TC_FIELD_DECL::get_offset" << std::endl;
  //check_type(f);
  return self->FIELD_OFFSET_I(f);
}

long unsigned int TC_FIELD_DECL::get_bit_offset(TC_FIELD_DECL* self,tree f) {
  return self->FIELD_BIT_OFFSET_I(f);
}

long unsigned int TC_FIELD_DECL::get_bit_size(TC_FIELD_DECL* self,tree f) {
  //  return 1; //TODO:
  return self->SIZE_I(f);
}

TC_FIELD_DECL aTC_FIELD_DECL;


class DefaultVal { public:  operator int() { return -1;}};


class FieldTypeSwitchCall : public SwitchCall<int,DefaultVal>{
public:
  const char * process_name(tree t) {
    tree name = TYPE_NAME(t);
    if (name) {
      return NameWrapper(name).resolve();
    } else {
      return "<NULL>";
    }
  }

  FieldTypeSwitchCall(tree field_type) {
    std::cerr << "Fieldtype:" << endl;
    CallBack::check_type(field_type);
    std::cerr <<  NameWrapper(TYPE_NAME(field_type)).resolve();
    call<FieldTypeSwitchCall>(field_type);
  }
    
  int call_type_POINTER_TYPE(tree f) {
    std::cerr << "FieldTypeSwitchCall::call_type_POINTER_TYPE";
    FieldTypeSwitchCall a(TREE_TYPE(f));    
  }
  
  int call_type_RECORD_TYPE(tree f) {
    std::cerr << "FieldTypeSwitchCall::call_type_RECORD_TYPE(";
    const char * r= process_name(f);
    std::cerr << "name(" << r << "))";  
  }

  int call_type_UNION_TYPE(tree f) {
    std::cerr << "FieldTypeSwitchCall::call_type_UNION_TYPE(";
    const char * r= process_name(f);
    std::cerr << "name(" << r << "))";  
  }
  
  int call_type_INTEGER_TYPE(tree f) {
    std::cerr << "FieldTypeSwitchCall::call_type_INTEGER_TYPE(";
    const char * r= process_name(f);
    std::cerr << "name(" << r << "))";  
  }
  
  int call_type_ARRAY_TYPE(tree f) {

    std::cerr << "FieldTypeSwitchCall::call_type_ARRAY_TYPE(";
    tree dom = TYPE_DOMAIN (f);
    std::cerr << "DOM=" << dom << ";";
    CallBack::check_type(dom);
    std::cerr << "DOM_MIN=" <<TREE_INT_CST_LOW(TYPE_MIN_VALUE (dom)) << ";";
    std::cerr << "DOM_MAX=" <<TREE_INT_CST_LOW(TYPE_MAX_VALUE (dom)) << ";";

    tree type = TREE_TYPE (f);
    std::cerr << "TYPE=" << type << ";";
    CallBack::check_type(type);
    FieldTypeSwitchCall evaltype(type);

    tree typev = TYPE_MAIN_VARIANT (f);
    std::cerr << "TYPEV=" << typev << ";";
    CallBack::check_type(typev);
    //FieldTypeSwitchCall evaltypev(typev);

    tree maxval = TYPE_ARRAY_MAX_SIZE (f);
    std::cerr << "MAXVAL=" << maxval << ";";
    CallBack::check_type(maxval);

    unsigned HOST_WIDE_INT alen = TREE_INT_CST_LOW(array_type_nelts (f));
    std::cerr << "ALEN=" << alen << ";";

    bool string_flag = TYPE_STRING_FLAG(f);
    std::cerr << "string_flag=" << string_flag << ";";
    std::cerr << "TYPE_SIZE_UNIT=" << TREE_INT_CST_LOW(TYPE_SIZE_UNIT(f))<<";";

    
    std::cerr << "nonaliased=" << TYPE_NONALIASED_COMPONENT(f);
      
    std::cerr << ")";
  }
  
  //---------
  int call_type_REAL_TYPE(tree f) {
    std::cerr << "FieldTypeSwitchCall::call_type_REAL_TYPE";
  }
  
  int call_type_REFERENCE_TYPE(tree f) {
    std::cerr << "FieldTypeSwitchCall::call_type_REFERENCE_TYPE";
  }
  
  int call_type_QUAL_UNION_TYPE(tree f) {
    std::cerr << "FieldTypeSwitchCall::call_type_QUAL_UNION_TYPE";
  } 
  int call_type_ERROR_MARK(tree f) {
      std::cerr << "FieldTypeSwitchCall::call_type_ERROR_MARK";
    }
    int call_type_IDENTIFIER_NODE(tree f) {
      std::cerr << "FieldTypeSwitchCall::call_type_IDENTIFIER_NODE";
    }
    int call_type_TREE_LIST(tree f) {
      std::cerr << "FieldTypeSwitchCall::call_type_TREE_LIST";
    }
    int call_type_TREE_VEC(tree f) {
      std::cerr << "FieldTypeSwitchCall::call_type_TREE_VEC";
    }
    int call_type_BLOCK(tree f) {
      std::cerr << "FieldTypeSwitchCall::call_type_BLOCK";
    }
    int call_type_OFFSET_TYPE(tree f) {
      std::cerr << "FieldTypeSwitchCall::call_type_OFFSET_TYPE";
    }
    int call_type_ENUMERAL_TYPE(tree f) {
      std::cerr << "FieldTypeSwitchCall::call_type_ENUMERAL_TYPE";
    }
    int call_type_BOOLEAN_TYPE(tree f) {
      std::cerr << "FieldTypeSwitchCall::call_type_BOOLEAN_TYPE";
    }
    int call_type_NULLPTR_TYPE(tree f) {
      std::cerr << "FieldTypeSwitchCall::call_type_NULLPTR_TYPE";
    }
  
  int call_type_FIXED_POINT_TYPE(tree f) {
    std::cerr << "FieldTypeSwitchCall::call_type_FIXED_POINT_TYPE";
    }
  
  int call_type_COMPLEX_TYPE(tree f) {
    std::cerr << "FieldTypeSwitchCall::call_type_COMPLEX_TYPE";
  }

  int call_type_VECTOR_TYPE(tree f) {
    std::cerr << "FieldTypeSwitchCall::call_type_VECTOR_TYPE";
  }

 int call_type_VOID_TYPE(tree f) {
    std::cerr << "FieldTypeSwitchCall::call_type_VOID_TYPE";
  }
 int call_type_POINTER_BOUNDS_TYPE(tree f) {
    std::cerr << "FieldTypeSwitchCall::call_type_POINTER_BOUNDS_TYPE";
  }
 int call_type_FUNCTION_TYPE(tree f) {
    std::cerr << "FieldTypeSwitchCall::call_type_FUNCTION_TYPE";
  }
 int call_type_METHOD_TYPE(tree f) {
    std::cerr << "FieldTypeSwitchCall::call_type_METHOD_TYPE";
  }
 int call_type_LANG_TYPE(tree f) {
    std::cerr << "FieldTypeSwitchCall::call_type_LANG_TYPE";
  }

  
};

void TC_FIELD_DECL::finish_type (tree t){
  const char * r= this->process_name(t);
  tree type = TREE_TYPE (t);

  std::cerr << "TC_FIELD_DECL::finish_type(";
  std::cerr << "name(" << r << "),";  
  std::cerr << "type(";

  FieldTypeSwitchCall doswitch(type);
  //call_type_ret<CallBack, int>(type, CallBack::finish_type_callback        );
  std::cerr << "))";
  
}

void TC_FIELD_DECL::finish_decl (tree t){
  std::cerr << "TC_FIELD_DECL::finish_decl" << std::endl;
}

void TC_FIELD_DECL::finish_unit (tree t){
}
