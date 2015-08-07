
#include "unle_expr.hpp"
TC_UNLE_EXPR aUNLE_EXPR;

void
TC_UNLE_EXPR::finish_type (tree t)
{
  cerr << "finish_type: UNLE_EXPR" << t << endl;
};

void
TC_UNLE_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: UNLE_EXPR" << t << endl;
};

void
TC_UNLE_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: UNLE_EXPR" << t << endl;
};
