
#include "tcwrapper.hpp"
class TC_GOTO_EXPR:public TCWrapper < GOTO_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
