
#include "tree_binfo.hpp"
TC_TREE_BINFO aTREE_BINFO;

void
TC_TREE_BINFO::finish_type (tree t)
{
  cerr << "finish_type: TREE_BINFO" << t << endl;
};

void
TC_TREE_BINFO::finish_decl (tree t)
{
  cerr << "finish_decl: TREE_BINFO" << t << endl;
};

void
TC_TREE_BINFO::finish_unit (tree t)
{
  cerr << "finish_unit: TREE_BINFO" << t << endl;
};
