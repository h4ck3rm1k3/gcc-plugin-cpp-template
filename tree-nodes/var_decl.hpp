
#include "tcwrapper.hpp"
class TC_VAR_DECL:public TCWrapper < VAR_DECL >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
