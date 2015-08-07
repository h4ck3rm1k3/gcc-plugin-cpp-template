
#include "vec_lshift_expr.hpp"
TC_VEC_LSHIFT_EXPR aVEC_LSHIFT_EXPR;

void
TC_VEC_LSHIFT_EXPR::finish_type (tree t)
{
  cerr << "finish_type: VEC_LSHIFT_EXPR" << t << endl;
};

void
TC_VEC_LSHIFT_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: VEC_LSHIFT_EXPR" << t << endl;
};

void
TC_VEC_LSHIFT_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: VEC_LSHIFT_EXPR" << t << endl;
};
