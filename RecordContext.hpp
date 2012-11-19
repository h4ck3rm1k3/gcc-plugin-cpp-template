class TC_IDENTIFIER_NODE;
class RecordContext {
  static int classcount;
  const char * class_name;
public:
  //callbacks
  void record_begin(const char * pname);
  static const char * type_name (TC_IDENTIFIER_NODE * cb,  tree_node* t) ;
  void field_begin(const char * name, double_int offset, double_int bit_offset, double_int bit_size
);
  static const char * field_name(TC_IDENTIFIER_NODE * cb,  tree_node* t);
  void field_end() ;
  void record_end() ;
};
