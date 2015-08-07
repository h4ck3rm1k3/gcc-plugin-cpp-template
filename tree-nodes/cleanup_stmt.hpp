
#include "tcwrapper.hpp"
class TC_CLEANUP_STMT:public TCWrapper < CLEANUP_STMT >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
