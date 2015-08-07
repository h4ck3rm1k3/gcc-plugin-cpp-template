
#include "tcwrapper.hpp"
class TC_RANGE_EXPR:public TCWrapper < RANGE_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
