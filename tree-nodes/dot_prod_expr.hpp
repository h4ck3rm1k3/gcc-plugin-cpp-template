
#include "tcwrapper.hpp"
class TC_DOT_PROD_EXPR:public TCWrapper < DOT_PROD_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
