
#include "tcwrapper.hpp"
class TC_ARRAY_TYPE:public TCWrapper < ARRAY_TYPE >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
