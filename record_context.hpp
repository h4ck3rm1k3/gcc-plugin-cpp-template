class TC_IDENTIFIER_NODE;
class TC_TYPE_DECL;

#include "field.hpp"

class RecordContext {
  static int classcount;
  const char * class_name;
public:
  void record_begin(const char * pname);
  static const char * type_name (TC_IDENTIFIER_NODE * cb,  tree_node* t) ;
  void field_begin(Field & fld);
  static const char * field_name(TC_IDENTIFIER_NODE * cb,  tree_node* t);
  //static const char * field_name(TC_TYPE_DECL * cb,  tree_node* t);
  void field_end() ;
  void record_end() ;
};
