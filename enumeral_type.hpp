class TC_ENUMERAL_TYPE : public TCWrapper<ENUMERAL_TYPE> {
public:

  class ProcEnum : public SwitchCall<void>{
    ProcEnum(tree node): node(node){}
  
    void call_type_IDENTIFIER_NODE(tree b) {}
    void call_type_TYPE_DECL(tree b) {}
    void call_type_RECORD_TYPE(tree b){}
    void resolve() {
      return call<ProcEnum>(name);
    }
  };
  
  virtual void finish_type (tree t)
  {
    while (t) {
      ProcEnum(t).resolve();
      f = chain(f);      
    }
  }

}
