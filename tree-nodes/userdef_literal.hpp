
#include "tcwrapper.hpp"
class TC_USERDEF_LITERAL:public TCWrapper < USERDEF_LITERAL >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
