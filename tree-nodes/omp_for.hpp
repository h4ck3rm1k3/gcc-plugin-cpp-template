
#include "tcwrapper.hpp"
class TC_OMP_FOR:public TCWrapper < OMP_FOR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
