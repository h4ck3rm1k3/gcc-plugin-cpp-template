
#include "tcwrapper.hpp"
class TC_WIDEN_LSHIFT_EXPR:public TCWrapper < WIDEN_LSHIFT_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
