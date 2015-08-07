
#include "tcwrapper.hpp"
class TC_ARROW_EXPR:public TCWrapper < ARROW_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
