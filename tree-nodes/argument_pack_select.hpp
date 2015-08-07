
#include "tcwrapper.hpp"
class TC_ARGUMENT_PACK_SELECT:public TCWrapper < ARGUMENT_PACK_SELECT >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
