
#include "overload.hpp"
TC_OVERLOAD aOVERLOAD;

void
TC_OVERLOAD::finish_type (tree t)
{
  cerr << "finish_type: OVERLOAD" << t << endl;
};

void
TC_OVERLOAD::finish_decl (tree t)
{
  cerr << "finish_decl: OVERLOAD" << t << endl;
};

void
TC_OVERLOAD::finish_unit (tree t)
{
  cerr << "finish_unit: OVERLOAD" << t << endl;
};
