#pragma once
class DefaultStr {
public:
  operator const char * () {
    return "EMPTY";
  }
};

class NameWrapper : public SwitchCall<const char *,DefaultStr>{
  /*
    Wrapper around the results of a name field for a thing.
    resolves the name string
  */
  tree name;
public:
  NameWrapper(tree name): name(name){}

  const char * default_value(tree b) { return "NONE"; }
  
  //template <class T> const char * call_type(T,tree b);
  
  const char * call_type_IDENTIFIER_NODE(tree b);
  const char * call_type_TYPE_DECL(tree b);
  const char * call_type_RECORD_TYPE(tree b);

  const char * resolve() {
    return call<NameWrapper>(name);
  }

};

