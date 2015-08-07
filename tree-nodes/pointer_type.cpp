
#include "pointer_type.hpp"
TC_POINTER_TYPE aPOINTER_TYPE;

void
TC_POINTER_TYPE::finish_type (tree t)
{
  cerr << "finish_type: POINTER_TYPE" << t << endl;
};

void
TC_POINTER_TYPE::finish_decl (tree t)
{
  cerr << "finish_decl: POINTER_TYPE" << t << endl;
};

void
TC_POINTER_TYPE::finish_unit (tree t)
{
  cerr << "finish_unit: POINTER_TYPE" << t << endl;
};
