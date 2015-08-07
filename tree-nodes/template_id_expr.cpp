
#include "template_id_expr.hpp"
TC_TEMPLATE_ID_EXPR aTEMPLATE_ID_EXPR;

void
TC_TEMPLATE_ID_EXPR::finish_type (tree t)
{
  cerr << "finish_type: TEMPLATE_ID_EXPR" << t << endl;
};

void
TC_TEMPLATE_ID_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: TEMPLATE_ID_EXPR" << t << endl;
};

void
TC_TEMPLATE_ID_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: TEMPLATE_ID_EXPR" << t << endl;
};
