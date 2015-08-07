
#include "tcwrapper.hpp"
class TC_FOR_STMT:public TCWrapper < FOR_STMT >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
