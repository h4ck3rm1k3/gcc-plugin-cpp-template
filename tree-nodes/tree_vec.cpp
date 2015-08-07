
#include "tree_vec.hpp"
TC_TREE_VEC aTREE_VEC;

void
TC_TREE_VEC::finish_type (tree t)
{
  cerr << "finish_type: TREE_VEC" << t << endl;
};

void
TC_TREE_VEC::finish_decl (tree t)
{
  cerr << "finish_decl: TREE_VEC" << t << endl;
};

void
TC_TREE_VEC::finish_unit (tree t)
{
  cerr << "finish_unit: TREE_VEC" << t << endl;
};
