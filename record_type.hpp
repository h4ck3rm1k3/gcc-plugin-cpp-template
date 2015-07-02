class TC_RECORD_TYPE: public  TCWrapper<RECORD_TYPE>
{
public :
  tree fields(tree t);
  tree name(tree t);
  tree chain(tree t);
  const char * process_name(tree t);
  void process_fields(RecordContext * c,tree f);
  virtual void finish_type (tree t);
  virtual void check() {
    std::cerr << " record type ("<< get_treecode()<<") " << std::endl;
  }
};
