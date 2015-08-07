
#include "tcwrapper.hpp"
class TC_OVERLOAD:public TCWrapper < OVERLOAD >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
