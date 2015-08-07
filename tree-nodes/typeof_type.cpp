
#include "typeof_type.hpp"
TC_TYPEOF_TYPE aTYPEOF_TYPE;

void
TC_TYPEOF_TYPE::finish_type (tree t)
{
  cerr << "finish_type: TYPEOF_TYPE" << t << endl;
};

void
TC_TYPEOF_TYPE::finish_decl (tree t)
{
  cerr << "finish_decl: TYPEOF_TYPE" << t << endl;
};

void
TC_TYPEOF_TYPE::finish_unit (tree t)
{
  cerr << "finish_unit: TYPEOF_TYPE" << t << endl;
};
