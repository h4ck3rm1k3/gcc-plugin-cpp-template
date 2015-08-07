
#include "case_label_expr.hpp"
TC_CASE_LABEL_EXPR aCASE_LABEL_EXPR;

void
TC_CASE_LABEL_EXPR::finish_type (tree t)
{
  cerr << "finish_type: CASE_LABEL_EXPR" << t << endl;
};

void
TC_CASE_LABEL_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: CASE_LABEL_EXPR" << t << endl;
};

void
TC_CASE_LABEL_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: CASE_LABEL_EXPR" << t << endl;
};
