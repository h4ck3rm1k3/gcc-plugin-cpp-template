
#include "tcwrapper.hpp"
class TC_BOUND_TEMPLATE_TEMPLATE_PARM:public TCWrapper <
  BOUND_TEMPLATE_TEMPLATE_PARM >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
