
#include "tcwrapper.hpp"
class TC_CAST_EXPR:public TCWrapper < CAST_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
