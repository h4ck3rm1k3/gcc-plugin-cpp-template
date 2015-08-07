
#include "tcwrapper.hpp"
class TC_RESULT_DECL:public TCWrapper < RESULT_DECL >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
