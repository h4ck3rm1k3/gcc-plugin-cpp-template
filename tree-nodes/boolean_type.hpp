
#include "tcwrapper.hpp"
class TC_BOOLEAN_TYPE:public TCWrapper < BOOLEAN_TYPE >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
