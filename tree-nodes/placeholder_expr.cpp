
#include "placeholder_expr.hpp"
TC_PLACEHOLDER_EXPR aPLACEHOLDER_EXPR;

void
TC_PLACEHOLDER_EXPR::finish_type (tree t)
{
  cerr << "finish_type: PLACEHOLDER_EXPR" << t << endl;
};

void
TC_PLACEHOLDER_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: PLACEHOLDER_EXPR" << t << endl;
};

void
TC_PLACEHOLDER_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: PLACEHOLDER_EXPR" << t << endl;
};
