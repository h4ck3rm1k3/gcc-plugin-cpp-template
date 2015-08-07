
#include "tcwrapper.hpp"
class TC_COMPARE_L_EXPR:public TCWrapper < COMPARE_L_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
