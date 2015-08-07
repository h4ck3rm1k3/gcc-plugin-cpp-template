
#include "tcwrapper.hpp"
class TC_OFFSET_REF:public TCWrapper < OFFSET_REF >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
