
#include "vec_perm_expr.hpp"
TC_VEC_PERM_EXPR aVEC_PERM_EXPR;

void
TC_VEC_PERM_EXPR::finish_type (tree t)
{
  cerr << "finish_type: VEC_PERM_EXPR" << t << endl;
};

void
TC_VEC_PERM_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: VEC_PERM_EXPR" << t << endl;
};

void
TC_VEC_PERM_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: VEC_PERM_EXPR" << t << endl;
};
