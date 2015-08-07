
#include "tcwrapper.hpp"
class TC_CATEGORY_IMPLEMENTATION_TYPE:public TCWrapper <
  CATEGORY_IMPLEMENTATION_TYPE >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
