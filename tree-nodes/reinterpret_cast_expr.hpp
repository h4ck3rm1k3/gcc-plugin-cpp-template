
#include "tcwrapper.hpp"
class TC_REINTERPRET_CAST_EXPR:public TCWrapper < REINTERPRET_CAST_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
