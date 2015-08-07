
#include "tcwrapper.hpp"
class TC_FDESC_EXPR:public TCWrapper < FDESC_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
