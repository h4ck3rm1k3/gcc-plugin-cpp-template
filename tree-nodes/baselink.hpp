
#include "tcwrapper.hpp"
class TC_BASELINK:public TCWrapper < BASELINK >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
