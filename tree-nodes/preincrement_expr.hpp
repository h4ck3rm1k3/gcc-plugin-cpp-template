
#include "tcwrapper.hpp"
class TC_PREINCREMENT_EXPR:public TCWrapper < PREINCREMENT_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
