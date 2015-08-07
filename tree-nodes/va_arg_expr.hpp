
#include "tcwrapper.hpp"
class TC_VA_ARG_EXPR:public TCWrapper < VA_ARG_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
