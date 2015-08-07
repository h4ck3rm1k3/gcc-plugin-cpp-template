
#include "tcwrapper.hpp"
class TC_NE_EXPR:public TCWrapper < NE_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
