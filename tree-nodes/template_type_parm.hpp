
#include "tcwrapper.hpp"
class TC_TEMPLATE_TYPE_PARM:public TCWrapper < TEMPLATE_TYPE_PARM >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
