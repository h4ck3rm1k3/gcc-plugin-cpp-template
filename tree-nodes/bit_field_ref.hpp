
#include "tcwrapper.hpp"
class TC_BIT_FIELD_REF:public TCWrapper < BIT_FIELD_REF >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
