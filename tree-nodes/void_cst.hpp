
#include "tcwrapper.hpp"
class TC_VOID_CST:public TCWrapper < VOID_CST >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
