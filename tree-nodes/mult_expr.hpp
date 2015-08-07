
#include "tcwrapper.hpp"
class TC_MULT_EXPR:public TCWrapper < MULT_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
