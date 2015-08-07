
#include "tcwrapper.hpp"
class TC_SCOPE_REF:public TCWrapper < SCOPE_REF >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
