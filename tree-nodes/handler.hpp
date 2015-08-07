
#include "tcwrapper.hpp"
class TC_HANDLER:public TCWrapper < HANDLER >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
