
#include "lang_type.hpp"
TC_LANG_TYPE aLANG_TYPE;

void
TC_LANG_TYPE::finish_type (tree t)
{
  cerr << "finish_type: LANG_TYPE" << t << endl;
};

void
TC_LANG_TYPE::finish_decl (tree t)
{
  cerr << "finish_decl: LANG_TYPE" << t << endl;
};

void
TC_LANG_TYPE::finish_unit (tree t)
{
  cerr << "finish_unit: LANG_TYPE " << t;
  cerr << " ID " << TYPE_IDENTIFIER (t);
  cerr << endl;
};
