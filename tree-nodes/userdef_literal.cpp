
#include "userdef_literal.hpp"
TC_USERDEF_LITERAL aUSERDEF_LITERAL;

void
TC_USERDEF_LITERAL::finish_type (tree t)
{
  cerr << "finish_type: USERDEF_LITERAL" << t << endl;
};

void
TC_USERDEF_LITERAL::finish_decl (tree t)
{
  cerr << "finish_decl: USERDEF_LITERAL" << t << endl;
};

void
TC_USERDEF_LITERAL::finish_unit (tree t)
{
  cerr << "finish_unit: USERDEF_LITERAL" << t << endl;
};
