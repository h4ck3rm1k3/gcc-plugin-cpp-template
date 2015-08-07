
#include "tcwrapper.hpp"
class TC_RETURN_EXPR:public TCWrapper < RETURN_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
