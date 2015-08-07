
#include "tcwrapper.hpp"
class TC_TRUNC_MOD_EXPR:public TCWrapper < TRUNC_MOD_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
