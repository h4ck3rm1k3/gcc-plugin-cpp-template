
#include "tcwrapper.hpp"
class TC_OACC_KERNELS:public TCWrapper < OACC_KERNELS >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
