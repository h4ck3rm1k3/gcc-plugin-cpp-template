
#include "tcwrapper.hpp"
class TC_BIT_AND_EXPR:public TCWrapper < BIT_AND_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
