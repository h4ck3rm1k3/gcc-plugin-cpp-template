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

class TC_IDENTIFIER_NODE;

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

class TC_IDENTIFIER_NODE  : public TCWrapper<IDENTIFIER_NODE>{
public:
  const char * id_str(tree_node * t);
  const char * id(tree_node * t);
};

class TC_TYPE_DECL  : public TCWrapper<TYPE_DECL>{
public:
};

class  TC_FIELD_DECL : public  TCWrapper<FIELD_DECL>
{
public :
  tree name(tree t);
  const char * process_name(tree t);
  static const char * finish_type_field(TC_FIELD_DECL* self,tree f);
  static double_int  get_offset(TC_FIELD_DECL* self,tree f);
  static double_int  get_bit_offset(TC_FIELD_DECL* self,tree f);
  static double_int  get_bit_size(TC_FIELD_DECL* self,tree f);
  static bool  get_bit_field(TC_FIELD_DECL* self,tree t) { return self->BIT_FIELD_TYPE(t); }

  bool C_BIT_FIELD(tree t);
  tree SIZE (tree t) { return DECL_SIZE(t);}
  double_int SIZE_I (tree t) { return TREE_INT_CST(SIZE(t));}
  int ALIGN (tree t) { return DECL_ALIGN(t);}
  //

  tree FIELD_CONTEXT(tree t) { return DECL_FIELD_CONTEXT(t);}

  tree FIELD_OFFSET(tree t) { return DECL_FIELD_OFFSET(t);}
  tree FIELD_BIT_OFFSET(tree t) { return DECL_FIELD_BIT_OFFSET(t);}

  double_int FIELD_OFFSET_I(tree t) { return TREE_INT_CST(FIELD_OFFSET(t));}
  double_int FIELD_BIT_OFFSET_I(tree t) { return TREE_INT_CST(FIELD_BIT_OFFSET(t));}

  tree BIT_FIELD_TYPE(tree t)  { return DECL_BIT_FIELD_TYPE(t);}
  int OFFSET_ALIGN(tree t)  { return DECL_OFFSET_ALIGN(t);}

  bool _DECL_C_BIT_FIELD(tree t){
    //return DECL_C_BIT_FIELD(t);
    return 0;
  }


};

class TC_LABEL_DECL  : public  TCWrapper<LABEL_DECL>{};
class TC_VOID_TYPE  : public  TCWrapper<VOID_TYPE>{};

class TC_RECORD_TYPE: public  TCWrapper<RECORD_TYPE>
{
public :
  tree fields(tree t);
  tree name(tree t);
  tree chain(tree t);
  const char * process_name(tree t);
  void process_fields(RecordContext * c,tree f);
  virtual void finish_type (tree t);
  virtual void check() {
    std::cerr << " record type ("<< get_treecode()<<") " << std::endl;
  }
};

void cpp_callbackPLUGIN_START_UNIT ();
void cpp_callbackPLUGIN_FINISH_TYPE (tree t, void *i);


//template <class EXPECTED_NODE_TYPE,class EXPECTED_RETURN_TYPE, class METHOD_TO_CALL > EXPECTED_RETURN_TYPE call_f_type_ret(tree f, METHOD_TO_CALL fn);

template <class Return> class SwitchCall {
public:
  template<class Node>Return call_type(Node a, tree b);

  template<class Context> Return call(tree t) {
    enum tree_code tc=t->typed.base.code;
    switch(tc) {
    case TC_IDENTIFIER_NODE::t_code_c:
      return ((Context*)this)->call_type_IDENTIFIER_NODE(t);
      break;
    case TC_TYPE_DECL::t_code_c:
      return ((Context*)this)->call_type_TYPE_DECL(t);
      break;
    case TC_RECORD_TYPE::t_code_c:
      return ((Context*)this)->call_type_RECORD_TYPE(t);
      break;
    default:
      enum tree_code tc=t->typed.base.code;
      cerr << get_tree_code_name (tc);
      return get_tree_code_name (tc);
        //return "TODO";
      break;
    }

  }
};

class NameWrapper : public SwitchCall<const char *>{
  /*
    Wrapper around the results of a name field for a thing.
    resolves the name string
  */
  tree name;
public:
  NameWrapper(tree name):
    name(name){}

  //template <class T> const char * call_type(T,tree b);
  
  const char * call_type_IDENTIFIER_NODE(tree b);
  const char * call_type_TYPE_DECL(tree b);
  const char * call_type_RECORD_TYPE(tree b);

  const char * resolve() {
    return call<NameWrapper>(name);
  }

};
