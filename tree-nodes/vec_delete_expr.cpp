
#include "vec_delete_expr.hpp"
TC_VEC_DELETE_EXPR aVEC_DELETE_EXPR;

void
TC_VEC_DELETE_EXPR::finish_type (tree t)
{
  cerr << "finish_type: VEC_DELETE_EXPR" << t << endl;
};

void
TC_VEC_DELETE_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: VEC_DELETE_EXPR" << t << endl;
};

void
TC_VEC_DELETE_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: VEC_DELETE_EXPR" << t << endl;
};
