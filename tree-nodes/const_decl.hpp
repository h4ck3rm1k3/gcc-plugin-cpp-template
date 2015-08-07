
#include "tcwrapper.hpp"
class TC_CONST_DECL:public TCWrapper < CONST_DECL >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
