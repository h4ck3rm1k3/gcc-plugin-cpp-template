
#include "unconstrained_array_type.hpp"
TC_UNCONSTRAINED_ARRAY_TYPE aUNCONSTRAINED_ARRAY_TYPE;

void
TC_UNCONSTRAINED_ARRAY_TYPE::finish_type (tree t)
{
  cerr << "finish_type: UNCONSTRAINED_ARRAY_TYPE" << t << endl;
};

void
TC_UNCONSTRAINED_ARRAY_TYPE::finish_decl (tree t)
{
  cerr << "finish_decl: UNCONSTRAINED_ARRAY_TYPE" << t << endl;
};

void
TC_UNCONSTRAINED_ARRAY_TYPE::finish_unit (tree t)
{
  cerr << "finish_unit: UNCONSTRAINED_ARRAY_TYPE" << t << endl;
};
