
#include "sizeof_expr.hpp"
TC_SIZEOF_EXPR aSIZEOF_EXPR;

void
TC_SIZEOF_EXPR::finish_type (tree t)
{
  cerr << "finish_type: SIZEOF_EXPR" << t << endl;
};

void
TC_SIZEOF_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: SIZEOF_EXPR" << t << endl;
};

void
TC_SIZEOF_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: SIZEOF_EXPR" << t << endl;
};
