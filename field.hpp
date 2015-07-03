class Field {
public:
  const char * name;
  int offset;
  int bit_offset;
  int bit_size;
  bool bit_field;

  Field(tree_node * f) : name(0) {
    process(f);
  }
  void process(tree_node * f);
};
