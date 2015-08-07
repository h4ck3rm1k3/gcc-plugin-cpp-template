
#include "type_argument_pack.hpp"
TC_TYPE_ARGUMENT_PACK aTYPE_ARGUMENT_PACK;

void
TC_TYPE_ARGUMENT_PACK::finish_type (tree t)
{
  cerr << "finish_type: TYPE_ARGUMENT_PACK" << t << endl;
};

void
TC_TYPE_ARGUMENT_PACK::finish_decl (tree t)
{
  cerr << "finish_decl: TYPE_ARGUMENT_PACK" << t << endl;
};

void
TC_TYPE_ARGUMENT_PACK::finish_unit (tree t)
{
  cerr << "finish_unit: TYPE_ARGUMENT_PACK" << t << endl;
};
