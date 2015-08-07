
#include "var_decl.hpp"
TC_VAR_DECL aVAR_DECL;

void
TC_VAR_DECL::finish_type (tree t)
{
  cerr << "finish_type: VAR_DECL" << t << endl;
};

void
TC_VAR_DECL::finish_decl (tree t)
{
  cerr << "finish_decl: VAR_DECL" << t << endl;
};

void
TC_VAR_DECL::finish_unit (tree t)
{
  cerr << "finish_unit: VAR_DECL" << t << endl;
};
