
#include "tcwrapper.hpp"
class TC_UNEQ_EXPR:public TCWrapper < UNEQ_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
