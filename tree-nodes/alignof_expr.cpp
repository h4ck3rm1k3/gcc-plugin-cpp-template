
#include "alignof_expr.hpp"
TC_ALIGNOF_EXPR aALIGNOF_EXPR;

void
TC_ALIGNOF_EXPR::finish_type (tree t)
{
  cerr << "finish_type: ALIGNOF_EXPR" << t << endl;
};

void
TC_ALIGNOF_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: ALIGNOF_EXPR" << t << endl;
};

void
TC_ALIGNOF_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: ALIGNOF_EXPR" << t << endl;
};
