
#include "tcwrapper.hpp"
class TC_USING_STMT:public TCWrapper < USING_STMT >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
