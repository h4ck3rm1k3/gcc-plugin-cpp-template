
#include "oacc_cache.hpp"
TC_OACC_CACHE aOACC_CACHE;

void
TC_OACC_CACHE::finish_type (tree t)
{
  cerr << "finish_type: OACC_CACHE" << t << endl;
};

void
TC_OACC_CACHE::finish_decl (tree t)
{
  cerr << "finish_decl: OACC_CACHE" << t << endl;
};

void
TC_OACC_CACHE::finish_unit (tree t)
{
  cerr << "finish_unit: OACC_CACHE" << t << endl;
};
