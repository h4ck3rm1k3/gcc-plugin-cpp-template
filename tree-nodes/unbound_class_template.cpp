
#include "unbound_class_template.hpp"
TC_UNBOUND_CLASS_TEMPLATE aUNBOUND_CLASS_TEMPLATE;

void
TC_UNBOUND_CLASS_TEMPLATE::finish_type (tree t)
{
  cerr << "finish_type: UNBOUND_CLASS_TEMPLATE" << t << endl;
};

void
TC_UNBOUND_CLASS_TEMPLATE::finish_decl (tree t)
{
  cerr << "finish_decl: UNBOUND_CLASS_TEMPLATE" << t << endl;
};

void
TC_UNBOUND_CLASS_TEMPLATE::finish_unit (tree t)
{
  cerr << "finish_unit: UNBOUND_CLASS_TEMPLATE" << t << endl;
};
