
#include "offset_type.hpp"
TC_OFFSET_TYPE aOFFSET_TYPE;

void
TC_OFFSET_TYPE::finish_type (tree t)
{
  cerr << "finish_type: OFFSET_TYPE" << t << endl;
};

void
TC_OFFSET_TYPE::finish_decl (tree t)
{
  cerr << "finish_decl: OFFSET_TYPE" << t << endl;
};

void
TC_OFFSET_TYPE::finish_unit (tree t)
{
  cerr << "finish_unit: OFFSET_TYPE" << t << endl;
};
