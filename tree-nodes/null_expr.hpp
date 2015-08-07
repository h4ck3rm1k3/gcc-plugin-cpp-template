
#include "tcwrapper.hpp"
class TC_NULL_EXPR:public TCWrapper < NULL_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
