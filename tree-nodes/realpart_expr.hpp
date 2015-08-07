
#include "tcwrapper.hpp"
class TC_REALPART_EXPR:public TCWrapper < REALPART_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
