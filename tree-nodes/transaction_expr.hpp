
#include "tcwrapper.hpp"
class TC_TRANSACTION_EXPR:public TCWrapper < TRANSACTION_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
