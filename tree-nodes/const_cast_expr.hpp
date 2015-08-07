
#include "tcwrapper.hpp"
class TC_CONST_CAST_EXPR:public TCWrapper < CONST_CAST_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
