
#include "typename_type.hpp"
TC_TYPENAME_TYPE aTYPENAME_TYPE;

void
TC_TYPENAME_TYPE::finish_type (tree t)
{
  cerr << "finish_type: TYPENAME_TYPE" << t << endl;
};

void
TC_TYPENAME_TYPE::finish_decl (tree t)
{
  cerr << "finish_decl: TYPENAME_TYPE" << t << endl;
};

void
TC_TYPENAME_TYPE::finish_unit (tree t)
{
  cerr << "finish_unit: TYPENAME_TYPE" << t << endl;
};
