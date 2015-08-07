
#include "tcwrapper.hpp"
class TC_CATCH_EXPR:public TCWrapper < CATCH_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
