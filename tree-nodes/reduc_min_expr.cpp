
#include "reduc_min_expr.hpp"
TC_REDUC_MIN_EXPR aREDUC_MIN_EXPR;

void
TC_REDUC_MIN_EXPR::finish_type (tree t)
{
  cerr << "finish_type: REDUC_MIN_EXPR" << t << endl;
};

void
TC_REDUC_MIN_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: REDUC_MIN_EXPR" << t << endl;
};

void
TC_REDUC_MIN_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: REDUC_MIN_EXPR" << t << endl;
};
