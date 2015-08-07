
#include "tcwrapper.hpp"
class TC_OMP_TARGET_DATA:public TCWrapper < OMP_TARGET_DATA >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
