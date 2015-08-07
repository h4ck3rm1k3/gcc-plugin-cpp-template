
#include "tcwrapper.hpp"
class TC_OMP_SECTION:public TCWrapper < OMP_SECTION >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
