
#include "tcwrapper.hpp"
class TC_GE_EXPR:public TCWrapper < GE_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
