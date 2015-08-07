
#include "tcwrapper.hpp"
class TC_FIXED_POINT_TYPE:public TCWrapper < FIXED_POINT_TYPE >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
