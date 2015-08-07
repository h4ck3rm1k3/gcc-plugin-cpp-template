
#include "vec_rshift_expr.hpp"
TC_VEC_RSHIFT_EXPR aVEC_RSHIFT_EXPR;

void
TC_VEC_RSHIFT_EXPR::finish_type (tree t)
{
  cerr << "finish_type: VEC_RSHIFT_EXPR" << t << endl;
};

void
TC_VEC_RSHIFT_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: VEC_RSHIFT_EXPR" << t << endl;
};

void
TC_VEC_RSHIFT_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: VEC_RSHIFT_EXPR" << t << endl;
};
