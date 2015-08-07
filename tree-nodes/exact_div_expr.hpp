
#include "tcwrapper.hpp"
class TC_EXACT_DIV_EXPR:public TCWrapper < EXACT_DIV_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
