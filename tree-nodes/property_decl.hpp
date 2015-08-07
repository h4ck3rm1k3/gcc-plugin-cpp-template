
#include "tcwrapper.hpp"
class TC_PROPERTY_DECL:public TCWrapper < PROPERTY_DECL >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
