
#include "tcwrapper.hpp"
class TC_TYPEID_EXPR:public TCWrapper < TYPEID_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
