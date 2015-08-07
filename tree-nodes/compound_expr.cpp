
#include "compound_expr.hpp"
TC_COMPOUND_EXPR aCOMPOUND_EXPR;

void
TC_COMPOUND_EXPR::finish_type (tree t)
{
  cerr << "finish_type: COMPOUND_EXPR" << t << endl;
};

void
TC_COMPOUND_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: COMPOUND_EXPR" << t << endl;
};

void
TC_COMPOUND_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: COMPOUND_EXPR" << t << endl;
};
