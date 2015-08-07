
#include "tcwrapper.hpp"
class TC_COMPLEX_CST:public TCWrapper < COMPLEX_CST >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
