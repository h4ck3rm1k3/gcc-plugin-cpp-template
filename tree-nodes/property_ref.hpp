
#include "tcwrapper.hpp"
class TC_PROPERTY_REF:public TCWrapper < PROPERTY_REF >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
