
#include "iasm_expr.hpp"
TC_IASM_EXPR aIASM_EXPR;

void
TC_IASM_EXPR::finish_type (tree t)
{
  cerr << "finish_type: IASM_EXPR" << t << endl;
};

void
TC_IASM_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: IASM_EXPR" << t << endl;
};

void
TC_IASM_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: IASM_EXPR" << t << endl;
};
