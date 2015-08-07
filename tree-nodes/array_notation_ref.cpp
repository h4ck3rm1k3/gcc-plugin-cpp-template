
#include "array_notation_ref.hpp"
TC_ARRAY_NOTATION_REF aARRAY_NOTATION_REF;

void
TC_ARRAY_NOTATION_REF::finish_type (tree t)
{
  cerr << "finish_type: ARRAY_NOTATION_REF" << t << endl;
};

void
TC_ARRAY_NOTATION_REF::finish_decl (tree t)
{
  cerr << "finish_decl: ARRAY_NOTATION_REF" << t << endl;
};

void
TC_ARRAY_NOTATION_REF::finish_unit (tree t)
{
  cerr << "finish_unit: ARRAY_NOTATION_REF" << t << endl;
};
