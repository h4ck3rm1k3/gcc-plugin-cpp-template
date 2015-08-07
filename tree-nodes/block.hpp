
#include "tcwrapper.hpp"
class TC_BLOCK:public TCWrapper < BLOCK >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
