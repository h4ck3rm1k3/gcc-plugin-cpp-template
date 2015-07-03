#include <iostream>
#include <vector>
#include <gcc-plugin.h>
#include <coretypes.h>
#include <tree.h>
#include "plugincpp.hpp"

#include "switchcall.hpp"
#include "name.hpp"
#include "record_context.hpp"
#include "introspection.hpp"

/////////////////////////////////////////////////////////////////

tree TC_RECORD_TYPE::fields(tree t) {
  return TYPE_FIELDS(t);
}
tree TC_RECORD_TYPE::name(tree t) {
  return TYPE_NAME(t);
}
tree TC_RECORD_TYPE::chain(tree t) {
  return TREE_CHAIN(t);
}


const char * TC_RECORD_TYPE::process_name(tree t) {
  //std::cerr << "TC_RECORD_TYPE::process_name" << std::endl;
  //check_type(name(t));
  if (!t)
    return "No Name";
  tree n= name(t);

  NameWrapper name(n);
  return name.resolve();

}
void TC_RECORD_TYPE::process_fields(RecordContext * c,tree f) {
  if (!f)
    return;
  while (f) {
    if (TC_FIELD_DECL::check_node(f)) {
      Field fld(f);      
      c->field_begin(fld);
    }
    f = chain(f);
  }
}
void TC_RECORD_TYPE::finish_type (tree t){
  RecordContext c;
  introspect_struct<tree_base>((tree_base*)t);
  const char *  n=process_name(t);
  if (strcmp(n,"") == 0)
    return;
  c.record_begin(n);
  process_fields(&c,fields(t));
  c.record_end();
}
TC_RECORD_TYPE aTC_RECORD_TYPE;
/////////////////////////////////////////////////////////////////
