
#include "tcwrapper.hpp"
class TC_CLEANUP_POINT_EXPR:public TCWrapper < CLEANUP_POINT_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
