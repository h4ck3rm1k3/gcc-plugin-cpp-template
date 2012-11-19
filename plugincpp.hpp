union tree_node;
typedef union tree_node *tree;
class RecordContext;
extern "C" void cpp_callbackPLUGIN_FINISH_TYPE (tree t, void *i);
extern "C" void   cpp_callbackPLUGIN_START_UNIT ();
using namespace std;

class CallBack;
//extern vector<CallBack*> callbacks(MAX_TREE_CODES);

class CallBack {
public:
  CallBack();
  virtual ~CallBack();
  static void check_type(tree f);
  virtual void check() { cerr << "base class" << endl; }
  template <class T2,class Ret, class T > Ret call_type_ret(tree f, T fn);
  template <class T2,class T > void call_type(tree f, T fn);
  static int finish_type_callback (CallBack *self, tree t);

  template <class T2,class Ret, class T > static Ret call_type_ret_static(tree t, T fn){
    CallBack* pT= CallBack::lookup_callback((tree_code)t->typed.base.code);
    if (pT) {
      Ret r=pT->call_type_ret<T2,Ret>(t,fn);
      return r;
    } else {
      cerr << "no callback found" << endl;
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

  virtual void check() { cerr << "wrapper class for type"<< tc << endl; }
  virtual tree_code get_treecode() { return tc; }

};

class TC_IDENTIFIER_NODE  : public TCWrapper<IDENTIFIER_NODE>{
public:
  const char * id_str(tree_node * t);
  const char * id(tree_node * t);
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

  bool DECL_C_BIT_FIELD(tree t){
  return DECL_C_BIT_FIELD(t);
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
  void process_field(RecordContext * c,tree f);
  virtual void finish_type (tree t);
  virtual void check() { cerr << " record type ("<< get_treecode()<<") " << endl; }
};

void   cpp_callbackPLUGIN_START_UNIT ();
void cpp_callbackPLUGIN_FINISH_TYPE (tree t, void *i);
