
#include "tcwrapper.hpp"
class TC_TARGET_MEM_REF:public TCWrapper < TARGET_MEM_REF >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
