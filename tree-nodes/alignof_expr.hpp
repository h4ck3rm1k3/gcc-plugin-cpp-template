
#include "tcwrapper.hpp"
class TC_ALIGNOF_EXPR:public TCWrapper < ALIGNOF_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
