
#include "result_decl.hpp"
TC_RESULT_DECL aRESULT_DECL;

void
TC_RESULT_DECL::finish_type (tree t)
{
  cerr << "finish_type: RESULT_DECL" << t << endl;
};

void
TC_RESULT_DECL::finish_decl (tree t)
{
  cerr << "finish_decl: RESULT_DECL" << t << endl;
};

void
TC_RESULT_DECL::finish_unit (tree t)
{
  cerr << "finish_unit: RESULT_DECL" << t << endl;
};
