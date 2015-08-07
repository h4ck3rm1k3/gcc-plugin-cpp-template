
#include "tcwrapper.hpp"
class TC_URSHIFT_EXPR:public TCWrapper < URSHIFT_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
