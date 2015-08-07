
#include "scope_ref.hpp"
TC_SCOPE_REF aSCOPE_REF;

void
TC_SCOPE_REF::finish_type (tree t)
{
  cerr << "finish_type: SCOPE_REF" << t << endl;
};

void
TC_SCOPE_REF::finish_decl (tree t)
{
  cerr << "finish_decl: SCOPE_REF" << t << endl;
};

void
TC_SCOPE_REF::finish_unit (tree t)
{
  cerr << "finish_unit: SCOPE_REF" << t << endl;
};
