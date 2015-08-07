
#include "tcwrapper.hpp"
class TC_INDIRECT_REF:public TCWrapper < INDIRECT_REF >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
