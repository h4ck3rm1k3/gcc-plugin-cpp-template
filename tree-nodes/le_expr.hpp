
#include "tcwrapper.hpp"
class TC_LE_EXPR:public TCWrapper < LE_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
