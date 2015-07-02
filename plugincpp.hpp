#include <iostream> 
union tree_node;
typedef union tree_node *tree;
class RecordContext;
extern "C" void cpp_callbackPLUGIN_FINISH_TYPE (tree t, void *i);
extern "C" void   cpp_callbackPLUGIN_START_UNIT ();
using namespace std;

class CallBack;
//extern vector<CallBack*> callbacks(MAX_TREE_CODES);

class MismatchedType
{
};

class CallBack {
public:
  CallBack();
  virtual ~CallBack();
  static void check_type(tree f);
  virtual void check() {
    std::cerr << "base class" << std::endl;
  }
  template <class EXPECTED_NODE_TYPE,class EXPECTED_RETURN_TYPE, class METHOD_TO_CALL > EXPECTED_RETURN_TYPE call_type_ret(tree f, METHOD_TO_CALL fn);
  template <class EXPECTED_NODE_TYPE,class METHOD_TO_CALL > void call_type(tree f, METHOD_TO_CALL fn);
  static int finish_type_callback (CallBack *self, tree t);

  /**
   * check node type in the base class always returns true because no type is specified. 
   * this method is designed to be called statically in the subclasses given a type expected and some node.
   */
  static bool check_node(tree f) {
    return true;
  }
      
  template <class EXPECTED_NODE_TYPE,class EXPECTED_RETURN_TYPE, class METHOD_TO_CALL > static EXPECTED_RETURN_TYPE call_type_ret_static(tree t, METHOD_TO_CALL fn){
    if (!EXPECTED_NODE_TYPE::check_node(t)) {
      throw MismatchedType();
    }
            
    CallBack* pT= CallBack::lookup_callback((tree_code)t->typed.base.code);
    if (pT) {
      //std::cerr << "going to call back " << (tree_code)t->typed.base.code << " : ";
      //cerr << get_tree_code_name ((tree_code)t->typed.base.code );
      //cerr << std::endl;
      EXPECTED_RETURN_TYPE r=pT->call_type_ret<EXPECTED_NODE_TYPE,EXPECTED_RETURN_TYPE>(t,fn);
      return r;
    } else {
      //std::cerr << "no callback found" << (tree_code)t->typed.base.code << " : ";
      //cerr << get_tree_code_name ((tree_code)t->typed.base.code );
      //cerr << std::endl;

    } 
  }

  virtual void finish_type (tree t);
  void save_callback(enum tree_code tc,CallBack * self);   // save this
  static CallBack * lookup_callback(enum tree_code tc);   // lookup
};


template <enum tree_code tc> class TCWrapper : public CallBack {
public:
  TCWrapper() {
    save_callback(tc,this);   // save this
  };

  const enum tree_code t_code() const { return tc; }
  static const enum tree_code t_code_c=tc;
  
  virtual void check() {
    std::cerr << "wrapper class for type (";
    std::cerr << tc;
    std::cerr << ") ";
    //std::cerr << get_tree_code_name (tc);
    std::cerr << std::endl;
  }
  static bool check_node(tree f) {
    enum tree_code atc=f->typed.base.code;
    // std::cerr << "check type "
    //           << get_tree_code_name (atc)
    //           << " vs type "
    //           << get_tree_code_name (tc)
    //           << std::endl;
    return atc == tc;
  }

  virtual tree_code get_treecode() { return tc; }

};


/*
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
*/
  

class TC_TYPE_DECL  : public TCWrapper<TYPE_DECL>{
public:
};


class TC_LABEL_DECL  : public  TCWrapper<LABEL_DECL>{};
class TC_VOID_TYPE  : public  TCWrapper<VOID_TYPE>{};

void cpp_callbackPLUGIN_START_UNIT ();
void cpp_callbackPLUGIN_FINISH_TYPE (tree t, void *i);


//template <class EXPECTED_NODE_TYPE,class EXPECTED_RETURN_TYPE, class METHOD_TO_CALL > EXPECTED_RETURN_TYPE call_f_type_ret(tree f, METHOD_TO_CALL fn);


