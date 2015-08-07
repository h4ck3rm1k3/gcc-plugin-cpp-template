
#include "tree_list.hpp"
TC_TREE_LIST aTREE_LIST;

void
TC_TREE_LIST::finish_type (tree t)
{
  cerr << "finish_type: TREE_LIST" << t << endl;
};

void
TC_TREE_LIST::finish_decl (tree t)
{
  cerr << "finish_decl: TREE_LIST" << t << endl;
};

void
TC_TREE_LIST::finish_unit (tree t)
{
  cerr << "finish_unit: TREE_LIST" << t << endl;
};
