
#include "tcwrapper.hpp"
class TC_RSHIFT_EXPR:public TCWrapper < RSHIFT_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
