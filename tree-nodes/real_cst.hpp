
#include "tcwrapper.hpp"
class TC_REAL_CST:public TCWrapper < REAL_CST >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
