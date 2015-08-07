
#include "tcwrapper.hpp"
class TC_TYPENAME_TYPE:public TCWrapper < TYPENAME_TYPE >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
