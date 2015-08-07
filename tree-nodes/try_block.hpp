
#include "tcwrapper.hpp"
class TC_TRY_BLOCK:public TCWrapper < TRY_BLOCK >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
