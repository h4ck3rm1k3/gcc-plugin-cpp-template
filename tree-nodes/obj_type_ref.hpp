
#include "tcwrapper.hpp"
class TC_OBJ_TYPE_REF:public TCWrapper < OBJ_TYPE_REF >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
