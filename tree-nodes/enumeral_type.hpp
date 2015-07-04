#include "tcwrapper.hpp"
#include "switchcall.hpp"

class TC_ENUMERAL_TYPE : public TCWrapper<ENUMERAL_TYPE> {
public:

  class ProcEnum : public SwitchCall<void>{
    
    tree node;
    
  public:
    
    ProcEnum(tree node): node(node){}
  
    void call_type_IDENTIFIER_NODE(tree b) {}
    void call_type_TYPE_DECL(tree b) {}
    void call_type_RECORD_TYPE(tree b){}
    void resolve() {
      return call<ProcEnum>(node);
    }
  };
  
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
