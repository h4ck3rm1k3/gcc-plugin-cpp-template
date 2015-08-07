
#include "tcwrapper.hpp"
class TC_NAMELIST_DECL:public TCWrapper < NAMELIST_DECL >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
