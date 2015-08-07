
#include "tcwrapper.hpp"
class TC_LOOP_EXPR:public TCWrapper < LOOP_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
