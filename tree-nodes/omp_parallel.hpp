
#include "tcwrapper.hpp"
class TC_OMP_PARALLEL:public TCWrapper < OMP_PARALLEL >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
