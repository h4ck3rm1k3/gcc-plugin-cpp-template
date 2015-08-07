
#include "tcwrapper.hpp"
class TC_IMPORTED_DECL:public TCWrapper < IMPORTED_DECL >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
