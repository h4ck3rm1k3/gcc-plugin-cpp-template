template <class Return> class SwitchCall {
public:
  /*
   * Default implementation returns the template parameter Default.
   */
  Return call_type_IDENTIFIER_NODE(tree b) { return 0; }
  Return call_type_TYPE_DECL(tree b) { return 0; }
  Return call_type_RECORD_TYPE(tree b) { return 0; }


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
