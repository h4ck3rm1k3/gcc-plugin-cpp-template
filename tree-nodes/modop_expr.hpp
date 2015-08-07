
#include "tcwrapper.hpp"
class TC_MODOP_EXPR:public TCWrapper < MODOP_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
