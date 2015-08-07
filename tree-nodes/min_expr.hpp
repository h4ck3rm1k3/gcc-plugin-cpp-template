
#include "tcwrapper.hpp"
class TC_MIN_EXPR:public TCWrapper < MIN_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
