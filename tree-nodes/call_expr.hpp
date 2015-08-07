
#include "tcwrapper.hpp"
class TC_CALL_EXPR:public TCWrapper < CALL_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
