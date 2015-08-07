
#include "tcwrapper.hpp"
class TC_LAMBDA_EXPR:public TCWrapper < LAMBDA_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
