
#include "tcwrapper.hpp"
class TC_FIXED_CONVERT_EXPR:public TCWrapper < FIXED_CONVERT_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
