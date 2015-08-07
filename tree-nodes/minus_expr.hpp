
#include "tcwrapper.hpp"
class TC_MINUS_EXPR:public TCWrapper < MINUS_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
