class NameWrapper : public SwitchCall<const char *>{
  /*
    Wrapper around the results of a name field for a thing.
    resolves the name string
  */
  tree name;
public:
  NameWrapper(tree name): name(name){}

  //template <class T> const char * call_type(T,tree b);
  
  const char * call_type_IDENTIFIER_NODE(tree b);
  const char * call_type_TYPE_DECL(tree b);
  const char * call_type_RECORD_TYPE(tree b);

  const char * resolve() {
    return call<NameWrapper>(name);
  }

};

const char * NameWrapper::call_type_IDENTIFIER_NODE(tree b){
  //return "NAME:ID";
  return IDENTIFIER_POINTER (b);
}

const char * NameWrapper::call_type_TYPE_DECL(tree b){
  //type_name = DECL_NAME (b);
  if (DECL_P (b) && DECL_NAME (b))
    return IDENTIFIER_POINTER (DECL_NAME (b));
  else
    return "ERROR TYPE DECL";
  //return "NAME:TYPE";
}

const char * NameWrapper::call_type_RECORD_TYPE(tree b){
  return "NAME:RECORD";
}
