
#include "tcwrapper.hpp"
class TC_OMP_ATOMIC:public TCWrapper < OMP_ATOMIC >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
