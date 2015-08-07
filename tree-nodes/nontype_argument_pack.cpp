
#include "nontype_argument_pack.hpp"
TC_NONTYPE_ARGUMENT_PACK aNONTYPE_ARGUMENT_PACK;

void
TC_NONTYPE_ARGUMENT_PACK::finish_type (tree t)
{
  cerr << "finish_type: NONTYPE_ARGUMENT_PACK" << t << endl;
};

void
TC_NONTYPE_ARGUMENT_PACK::finish_decl (tree t)
{
  cerr << "finish_decl: NONTYPE_ARGUMENT_PACK" << t << endl;
};

void
TC_NONTYPE_ARGUMENT_PACK::finish_unit (tree t)
{
  cerr << "finish_unit: NONTYPE_ARGUMENT_PACK" << t << endl;
};
