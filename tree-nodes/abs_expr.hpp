
#include "tcwrapper.hpp"
class TC_ABS_EXPR:public TCWrapper < ABS_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
