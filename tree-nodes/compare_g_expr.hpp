
#include "tcwrapper.hpp"
class TC_COMPARE_G_EXPR:public TCWrapper < COMPARE_G_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
