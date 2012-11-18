class TC_IDENTIFIER_NODE;
class RecordContext {
  static int classcount;
  const char * class_name;
public:
  //callbacks
  void record_begin(const char * pname);
  static const char * type_name (TC_IDENTIFIER_NODE * cb,  tree_node* t) ;
  void field_begin(const char * name);
  static const char * field_name(TC_IDENTIFIER_NODE * cb,  tree_node* t);
  void field_end() ;
  void record_end() ;
};
