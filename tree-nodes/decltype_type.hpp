
#include "tcwrapper.hpp"
class TC_DECLTYPE_TYPE:public TCWrapper < DECLTYPE_TYPE >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
