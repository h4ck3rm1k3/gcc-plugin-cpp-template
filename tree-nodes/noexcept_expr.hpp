
#include "tcwrapper.hpp"
class TC_NOEXCEPT_EXPR:public TCWrapper < NOEXCEPT_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
