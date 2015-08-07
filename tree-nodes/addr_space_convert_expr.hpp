
#include "tcwrapper.hpp"
class TC_ADDR_SPACE_CONVERT_EXPR:public TCWrapper < ADDR_SPACE_CONVERT_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
