
#include "tcwrapper.hpp"
class TC_ORDERED_EXPR:public TCWrapper < ORDERED_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
