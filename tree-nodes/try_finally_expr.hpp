
#include "tcwrapper.hpp"
class TC_TRY_FINALLY_EXPR:public TCWrapper < TRY_FINALLY_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
