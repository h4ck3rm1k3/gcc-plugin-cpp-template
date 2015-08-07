
#include "scev_not_known.hpp"
TC_SCEV_NOT_KNOWN aSCEV_NOT_KNOWN;

void
TC_SCEV_NOT_KNOWN::finish_type (tree t)
{
  cerr << "finish_type: SCEV_NOT_KNOWN" << t << endl;
};

void
TC_SCEV_NOT_KNOWN::finish_decl (tree t)
{
  cerr << "finish_decl: SCEV_NOT_KNOWN" << t << endl;
};

void
TC_SCEV_NOT_KNOWN::finish_unit (tree t)
{
  cerr << "finish_unit: SCEV_NOT_KNOWN" << t << endl;
};
