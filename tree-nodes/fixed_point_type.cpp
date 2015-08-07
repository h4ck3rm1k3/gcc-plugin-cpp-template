
#include "fixed_point_type.hpp"
TC_FIXED_POINT_TYPE aFIXED_POINT_TYPE;

void
TC_FIXED_POINT_TYPE::finish_type (tree t)
{
  cerr << "finish_type: FIXED_POINT_TYPE" << t << endl;
};

void
TC_FIXED_POINT_TYPE::finish_decl (tree t)
{
  cerr << "finish_decl: FIXED_POINT_TYPE" << t << endl;
};

void
TC_FIXED_POINT_TYPE::finish_unit (tree t)
{
  cerr << "finish_unit: FIXED_POINT_TYPE" << t << endl;
};
