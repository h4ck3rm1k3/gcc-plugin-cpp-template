
#include "tcwrapper.hpp"
class TC_PSEUDO_DTOR_EXPR:public TCWrapper < PSEUDO_DTOR_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
