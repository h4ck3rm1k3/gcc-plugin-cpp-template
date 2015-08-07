
#include "imagpart_expr.hpp"
TC_IMAGPART_EXPR aIMAGPART_EXPR;

void
TC_IMAGPART_EXPR::finish_type (tree t)
{
  cerr << "finish_type: IMAGPART_EXPR" << t << endl;
};

void
TC_IMAGPART_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: IMAGPART_EXPR" << t << endl;
};

void
TC_IMAGPART_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: IMAGPART_EXPR" << t << endl;
};
