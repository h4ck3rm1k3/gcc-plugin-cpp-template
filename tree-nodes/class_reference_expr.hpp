
#include "tcwrapper.hpp"
class TC_CLASS_REFERENCE_EXPR:public TCWrapper < CLASS_REFERENCE_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
