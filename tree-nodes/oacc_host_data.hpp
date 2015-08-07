
#include "tcwrapper.hpp"
class TC_OACC_HOST_DATA:public TCWrapper < OACC_HOST_DATA >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
