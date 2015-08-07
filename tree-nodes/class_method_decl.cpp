
#include "class_method_decl.hpp"
TC_CLASS_METHOD_DECL aCLASS_METHOD_DECL;

void
TC_CLASS_METHOD_DECL::finish_type (tree t)
{
  cerr << "finish_type: CLASS_METHOD_DECL" << t << endl;
};

void
TC_CLASS_METHOD_DECL::finish_decl (tree t)
{
  cerr << "finish_decl: CLASS_METHOD_DECL" << t << endl;
};

void
TC_CLASS_METHOD_DECL::finish_unit (tree t)
{
  cerr << "finish_unit: CLASS_METHOD_DECL" << t << endl;
};
