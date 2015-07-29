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
#include "field_decl.hpp"

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
  int indent;
  const char * name;
  
  FieldTypeSwitchCall(tree field_type, const char * name="field_type", int indent = 0):
    indent(indent),
    name(name)
  {
    std::cerr << endl;
    for (int i =0; i <= indent; i++) {
      std::cerr << "  "; //<< i << ":"<< indent << endl;
    }
    std::cerr << "SWITCH:" <<name << ":";
    
    CallBack::check_type(field_type);
    std::cerr <<  NameWrapper(TYPE_NAME(field_type)).resolve();
    call<FieldTypeSwitchCall>(field_type);
  }

  const char * process_name(tree t) {
    tree name = TYPE_NAME(t);
    if (name) {
      return NameWrapper(name).resolve();
    } else {
      return "<NULL>";
    }
  }

  int call_type_POINTER_TYPE(tree f) {
    std::cerr << "TS:POINTERT";
    FieldTypeSwitchCall a(TREE_TYPE(f),"Pointer",indent + 1);    
  }
  
  int call_type_RECORD_TYPE(tree f) {
    std::cerr << "TS:RECORD_TYPE(";
    const char * r= process_name(f);
    std::cerr << "name(" << r << "))";  
  }

  int call_type_UNION_TYPE(tree f) {
    std::cerr << "TS:UNION_TYPE(";
    const char * r= process_name(f);
    std::cerr << "name(" << r << "))";  
  }
  
  int call_type_INTEGER_TYPE(tree f) {
    std::cerr << "TS:INTEGER_TYPE(";
    const char * r= process_name(f);
    std::cerr << "name(" << r << "))";  
  }
  
  int call_type_ARRAY_TYPE(tree f) {

    std::cerr << "TS:ARRAY_TYPE(";
    tree dom = TYPE_DOMAIN (f);
    std::cerr << "DOM(";
    //std::cerr << "DOM=" << dom << ";";
    CallBack::check_type(dom);
    tree m = TYPE_MIN_VALUE (dom);
    if (m) {
      std::cerr << "DOM_MIN=" <<TREE_INT_CST_LOW(m) << ",";
    }
    
    tree m2 = TYPE_MIN_VALUE (dom);
    if (m2) {
      std::cerr << "DOM_MAX=" <<TREE_INT_CST_LOW(m2) << ")";
    }
    
    //tree typev = TYPE_MAIN_VARIANT (f);
    //std::cerr << "TYPEV=" << typev << ";";
    //CallBack::check_type(typev);
    //FieldTypeSwitchCall evaltypev(typev);

    tree maxval = TYPE_ARRAY_MAX_SIZE (f);
    std::cerr << "MAXVAL=" << maxval << ";";
    CallBack::check_type(maxval);

    tree l = array_type_nelts (f);
    if (l) {
      unsigned HOST_WIDE_INT alen = TREE_INT_CST_LOW(l);
      std::cerr << "ALEN=" << alen << ";";
    }

    bool string_flag = TYPE_STRING_FLAG(f);
    std::cerr << "string_flag=" << string_flag << ";";
    tree u = TYPE_SIZE_UNIT(f);
    if (u) {
      std::cerr << "TYPE_SIZE_UNIT=" << TREE_INT_CST_LOW(u)<<";";
    } else {
      std::cerr << "TYPE_SIZE_UNIT=<NULL>;";
    }

    std::cerr << "nonaliased=" << TYPE_NONALIASED_COMPONENT(f);
        
    tree type = TREE_TYPE (f);
    std::cerr << "TYPE(";
    CallBack::check_type(type);
    FieldTypeSwitchCall evaltype(type,"array_type",indent +1);
    std::cerr << ")";
   
      
    std::cerr << ")";
  }
  
  //---------
  int call_type_REAL_TYPE(tree f) {
    std::cerr << "TS:REALT";
  }
  
  int call_type_REFERENCE_TYPE(tree f) {
    std::cerr << "TS:REFERENCET";
  }
  
  int call_type_QUAL_UNION_TYPE(tree f) {
    std::cerr << "TS:QUAL_UNIONT";
  } 
  int call_type_ERROR_MARK(tree f) {
      std::cerr << "TS:ERROR_MARK";
    }
    int call_type_IDENTIFIER_NODE(tree f) {
      std::cerr << "TS:IDENTIFIER_NODE";
    }
    int call_type_TREE_LIST(tree f) {
      std::cerr << "TS:TREE_LIST";
    }
    int call_type_TREE_VEC(tree f) {
      std::cerr << "TS:TREE_VEC";
    }
    int call_type_BLOCK(tree f) {
      std::cerr << "TS:BLOCK";
    }
    int call_type_OFFSET_TYPE(tree f) {
      std::cerr << "TS:OFFSETT";
    }
    int call_type_ENUMERAL_TYPE(tree f) {
      std::cerr << "TS:ENUMERALT";
    }
    int call_type_BOOLEAN_TYPE(tree f) {
      std::cerr << "TS:BOOLEANT";
    }
    int call_type_NULLPTR_TYPE(tree f) {
      std::cerr << "TS:NULLPTRT";
    }
  
  int call_type_FIXED_POINT_TYPE(tree f) {
    std::cerr << "TS:FIXED_POINTT";
    }
  
  int call_type_COMPLEX_TYPE(tree f) {
    std::cerr << "TS:COMPLEXT";
  }

  int call_type_VECTOR_TYPE(tree f) {
    std::cerr << "TS:VECTORT";
  }

 int call_type_VOID_TYPE(tree f) {
    std::cerr << "TS:VOIDT";
  }
 int call_type_POINTER_BOUNDS_TYPE(tree f) {
    std::cerr << "TS:POINTER_BOUNDST";
  }
 int call_type_FUNCTION_TYPE(tree f) {
    std::cerr << "TS:FUNCTIONT";
  }
 int call_type_METHOD_TYPE(tree f) {
    std::cerr << "TS:METHODT";
  }
 int call_type_LANG_TYPE(tree f) {
    std::cerr << "TS:LANGT";
  }
  
};

void TC_FIELD_DECL::finish_type (tree t){
  const char * r= this->process_name(t);
  tree type = TREE_TYPE (t);

  std::cerr << "TC_FIELD_DECL::finish_type(";
  std::cerr << "name(" << r << "),";  
  std::cerr << "type(";

  FieldTypeSwitchCall doswitch(type,"Field",1);
  //call_type_ret<CallBack, int>(type, CallBack::finish_type_callback        );
  std::cerr << "))";
  
}

void TC_FIELD_DECL::finish_decl (tree t){
  std::cerr << "TC_FIELD_DECL::finish_decl" << std::endl;
}

void TC_FIELD_DECL::finish_unit (tree t){
}

long unsigned int TC_FIELD_DECL::FIELD_OFFSET_I(tree t) {
  tree f = FIELD_OFFSET(t);
  if (f) {
    return TREE_INT_CST_LOW(f);
  }
  return 0;
}
  
long unsigned int TC_FIELD_DECL::FIELD_BIT_OFFSET_I(tree t)
{
  tree f = FIELD_BIT_OFFSET(t);
  if (f) {
    return TREE_INT_CST_LOW(f);
  }
  return 0;
}

long unsigned int TC_FIELD_DECL::SIZE_I (tree t) {
  tree s = SIZE(t);
  if (s) {
    return TREE_INT_CST_LOW(s);
  } else {
    return 0;
  }

}
