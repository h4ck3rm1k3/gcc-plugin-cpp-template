
#include "tcwrapper.hpp"
class TC_MUST_NOT_THROW_EXPR:public TCWrapper < MUST_NOT_THROW_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
