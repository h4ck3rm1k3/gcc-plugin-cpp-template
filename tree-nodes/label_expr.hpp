
#include "tcwrapper.hpp"
class TC_LABEL_EXPR:public TCWrapper < LABEL_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
