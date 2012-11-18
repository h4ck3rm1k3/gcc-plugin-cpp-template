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
  void check_type(tree f);
  template <class T2,class Ret, class T > Ret call_type_ret(tree f, T fn);
  template <class T2,class T > void call_type(tree f, T fn);
  virtual void finish_type (tree t, void *i);
  void save_callback(enum tree_code tc,CallBack * self);   // save this
};

class TC_IDENTIFIER_NODE;

template <enum tree_code tc> class TCWrapper : public CallBack {
public:
  TCWrapper() {
    save_callback(tc,this);   // save this
  };

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
  virtual void finish_type (tree t, void *i);
};

void   cpp_callbackPLUGIN_START_UNIT ();
void cpp_callbackPLUGIN_FINISH_TYPE (tree t, void *i);
