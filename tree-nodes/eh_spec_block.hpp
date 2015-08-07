
#include "tcwrapper.hpp"
class TC_EH_SPEC_BLOCK:public TCWrapper < EH_SPEC_BLOCK >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
