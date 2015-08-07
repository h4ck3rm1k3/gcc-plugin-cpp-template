
#include "bit_and_expr.hpp"
TC_BIT_AND_EXPR aBIT_AND_EXPR;

void
TC_BIT_AND_EXPR::finish_type (tree t)
{
  cerr << "finish_type: BIT_AND_EXPR" << t << endl;
};

void
TC_BIT_AND_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: BIT_AND_EXPR" << t << endl;
};

void
TC_BIT_AND_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: BIT_AND_EXPR" << t << endl;
};
