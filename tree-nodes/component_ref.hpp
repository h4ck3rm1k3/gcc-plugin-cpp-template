
#include "tcwrapper.hpp"
class TC_COMPONENT_REF:public TCWrapper < COMPONENT_REF >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
