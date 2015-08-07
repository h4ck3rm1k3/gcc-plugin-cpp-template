
#include "category_interface_type.hpp"
TC_CATEGORY_INTERFACE_TYPE aCATEGORY_INTERFACE_TYPE;

void
TC_CATEGORY_INTERFACE_TYPE::finish_type (tree t)
{
  cerr << "finish_type: CATEGORY_INTERFACE_TYPE" << t << endl;
};

void
TC_CATEGORY_INTERFACE_TYPE::finish_decl (tree t)
{
  cerr << "finish_decl: CATEGORY_INTERFACE_TYPE" << t << endl;
};

void
TC_CATEGORY_INTERFACE_TYPE::finish_unit (tree t)
{
  cerr << "finish_unit: CATEGORY_INTERFACE_TYPE" << t << endl;
};
