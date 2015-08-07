
#include "bases.hpp"
TC_BASES aBASES;

void
TC_BASES::finish_type (tree t)
{
  cerr << "finish_type: BASES" << t << endl;
};

void
TC_BASES::finish_decl (tree t)
{
  cerr << "finish_decl: BASES" << t << endl;
};

void
TC_BASES::finish_unit (tree t)
{
  cerr << "finish_unit: BASES" << t << endl;
};
