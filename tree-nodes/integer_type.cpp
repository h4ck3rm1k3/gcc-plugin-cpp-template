
#include "integer_type.hpp"
TC_INTEGER_TYPE aINTEGER_TYPE;

void
TC_INTEGER_TYPE::finish_type (tree t)
{
  cerr << "TC_INTEGER_TYPE::finish_type(" << t << ")";
};

void
TC_INTEGER_TYPE::finish_decl (tree t)
{
  cerr << "finish_decl: INTEGER_TYPE" << t << endl;
};

void
TC_INTEGER_TYPE::finish_unit (tree t)
{
  cerr << "finish_unit: INTEGER_TYPE" << t << endl;
};
