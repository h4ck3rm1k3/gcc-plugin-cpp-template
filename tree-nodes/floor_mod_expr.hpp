
#include "tcwrapper.hpp"
class TC_FLOOR_MOD_EXPR:public TCWrapper < FLOOR_MOD_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
