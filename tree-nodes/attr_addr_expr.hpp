
#include "tcwrapper.hpp"
class TC_ATTR_ADDR_EXPR:public TCWrapper < ATTR_ADDR_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
