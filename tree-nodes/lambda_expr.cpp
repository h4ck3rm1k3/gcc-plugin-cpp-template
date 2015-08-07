
#include "lambda_expr.hpp"
TC_LAMBDA_EXPR aLAMBDA_EXPR;

void
TC_LAMBDA_EXPR::finish_type (tree t)
{
  cerr << "finish_type: LAMBDA_EXPR" << t << endl;
};

void
TC_LAMBDA_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: LAMBDA_EXPR" << t << endl;
};

void
TC_LAMBDA_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: LAMBDA_EXPR" << t << endl;
};
