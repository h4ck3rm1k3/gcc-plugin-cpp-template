
#include "tcwrapper.hpp"
class TC_UNSIGNED_RSHIFT_EXPR:public TCWrapper < UNSIGNED_RSHIFT_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
