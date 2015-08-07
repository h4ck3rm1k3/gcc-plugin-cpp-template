
#include "tcwrapper.hpp"
class TC_FUNCTION_DECL:public TCWrapper < FUNCTION_DECL >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
