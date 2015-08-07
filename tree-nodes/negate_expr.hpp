
#include "tcwrapper.hpp"
class TC_NEGATE_EXPR:public TCWrapper < NEGATE_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
