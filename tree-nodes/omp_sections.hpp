
#include "tcwrapper.hpp"
class TC_OMP_SECTIONS:public TCWrapper < OMP_SECTIONS >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
