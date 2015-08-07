
#include "tcwrapper.hpp"
class TC_ROUND_DIV_EXPR:public TCWrapper < ROUND_DIV_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
