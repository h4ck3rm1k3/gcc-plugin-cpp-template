
#include "attr_addr_expr.hpp"
TC_ATTR_ADDR_EXPR aATTR_ADDR_EXPR;

void
TC_ATTR_ADDR_EXPR::finish_type (tree t)
{
  cerr << "finish_type: ATTR_ADDR_EXPR" << t << endl;
};

void
TC_ATTR_ADDR_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: ATTR_ADDR_EXPR" << t << endl;
};

void
TC_ATTR_ADDR_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: ATTR_ADDR_EXPR" << t << endl;
};
