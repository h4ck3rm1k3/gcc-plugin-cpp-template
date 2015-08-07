
#include "tcwrapper.hpp"
class TC_THROW_EXPR:public TCWrapper < THROW_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
