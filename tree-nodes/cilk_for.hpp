
#include "tcwrapper.hpp"
class TC_CILK_FOR:public TCWrapper < CILK_FOR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
