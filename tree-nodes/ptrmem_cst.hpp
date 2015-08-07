
#include "tcwrapper.hpp"
class TC_PTRMEM_CST:public TCWrapper < PTRMEM_CST >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
