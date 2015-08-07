
#include "tcwrapper.hpp"
class TC_EMPTY_CLASS_EXPR:public TCWrapper < EMPTY_CLASS_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
