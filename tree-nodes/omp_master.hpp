
#include "tcwrapper.hpp"
class TC_OMP_MASTER:public TCWrapper < OMP_MASTER >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
