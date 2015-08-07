
#include "max_tree_codes.hpp"
TC_MAX_TREE_CODES aMAX_TREE_CODES;

void
TC_MAX_TREE_CODES::finish_type (tree t)
{
  cerr << "finish_type: MAX_TREE_CODES" << t << endl;
};

void
TC_MAX_TREE_CODES::finish_decl (tree t)
{
  cerr << "finish_decl: MAX_TREE_CODES" << t << endl;
};

void
TC_MAX_TREE_CODES::finish_unit (tree t)
{
  cerr << "finish_unit: MAX_TREE_CODES" << t << endl;
};
