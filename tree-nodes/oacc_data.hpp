
#include "tcwrapper.hpp"
class TC_OACC_DATA:public TCWrapper < OACC_DATA >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
