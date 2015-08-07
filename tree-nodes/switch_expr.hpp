
#include "tcwrapper.hpp"
class TC_SWITCH_EXPR:public TCWrapper < SWITCH_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
