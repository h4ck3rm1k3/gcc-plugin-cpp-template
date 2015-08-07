
#include "default_arg.hpp"
TC_DEFAULT_ARG aDEFAULT_ARG;

void
TC_DEFAULT_ARG::finish_type (tree t)
{
  cerr << "finish_type: DEFAULT_ARG" << t << endl;
};

void
TC_DEFAULT_ARG::finish_decl (tree t)
{
  cerr << "finish_decl: DEFAULT_ARG" << t << endl;
};

void
TC_DEFAULT_ARG::finish_unit (tree t)
{
  cerr << "finish_unit: DEFAULT_ARG" << t << endl;
};
