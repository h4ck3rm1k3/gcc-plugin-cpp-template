
#include "tcwrapper.hpp"
class TC_TEMPLATE_ID_EXPR:public TCWrapper < TEMPLATE_ID_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
