
#include "tcwrapper.hpp"
class TC_OFFSET_TYPE:public TCWrapper < OFFSET_TYPE >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
