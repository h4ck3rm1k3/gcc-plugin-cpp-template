
#include "tcwrapper.hpp"
class TC_ARRAY_REF:public TCWrapper < ARRAY_REF >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
