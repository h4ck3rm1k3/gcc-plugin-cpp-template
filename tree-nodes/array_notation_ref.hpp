
#include "tcwrapper.hpp"
class TC_ARRAY_NOTATION_REF:public TCWrapper < ARRAY_NOTATION_REF >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
