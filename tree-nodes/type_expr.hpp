
#include "tcwrapper.hpp"
class TC_TYPE_EXPR:public TCWrapper < TYPE_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
