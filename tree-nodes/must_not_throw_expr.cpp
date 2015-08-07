
#include "must_not_throw_expr.hpp"
TC_MUST_NOT_THROW_EXPR aMUST_NOT_THROW_EXPR;

void
TC_MUST_NOT_THROW_EXPR::finish_type (tree t)
{
  cerr << "finish_type: MUST_NOT_THROW_EXPR" << t << endl;
};

void
TC_MUST_NOT_THROW_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: MUST_NOT_THROW_EXPR" << t << endl;
};

void
TC_MUST_NOT_THROW_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: MUST_NOT_THROW_EXPR" << t << endl;
};
