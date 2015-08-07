
#include "tcwrapper.hpp"
class TC_NULLPTR_TYPE:public TCWrapper < NULLPTR_TYPE >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
