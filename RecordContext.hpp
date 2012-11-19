
class TC_IDENTIFIER_NODE;

class Field {
public:
  const char * name;
  int offset;
  int bit_offset;
  int bit_size;
  bool bit_field;
};

class RecordContext {
  static int classcount;
  const char * class_name;
public:
  //callbacks
  void record_begin(const char * pname);
  static const char * type_name (TC_IDENTIFIER_NODE * cb,  tree_node* t) ;
  void field_begin(Field & fld);
  static const char * field_name(TC_IDENTIFIER_NODE * cb,  tree_node* t);
  void field_end() ;
  void record_end() ;
};
