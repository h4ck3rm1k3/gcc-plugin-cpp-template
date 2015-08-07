
#include "tcwrapper.hpp"
class TC_NEW_EXPR:public TCWrapper < NEW_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
