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
  check_type(name(t));
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
        Field fld;
        fld.name=call_type_ret<TC_FIELD_DECL,const char *>(f,TC_FIELD_DECL::finish_type_field);
        fld.offset=call_type_ret<TC_FIELD_DECL,double_int>(f,TC_FIELD_DECL::get_offset).low;
        fld.bit_offset=call_type_ret<TC_FIELD_DECL,double_int>(f,TC_FIELD_DECL::get_bit_offset).low;
        fld.bit_size  =call_type_ret<TC_FIELD_DECL,double_int>(f,TC_FIELD_DECL::get_bit_size).low;
        fld.bit_field  =call_type_ret<TC_FIELD_DECL,bool>(f,TC_FIELD_DECL::get_bit_field);
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
