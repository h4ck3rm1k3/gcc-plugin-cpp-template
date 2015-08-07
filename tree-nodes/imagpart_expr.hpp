
#include "tcwrapper.hpp"
class TC_IMAGPART_EXPR:public TCWrapper < IMAGPART_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
