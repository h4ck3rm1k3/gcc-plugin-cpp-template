
#include "tcwrapper.hpp"
class TC_VECTOR_TYPE:public TCWrapper < VECTOR_TYPE >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
