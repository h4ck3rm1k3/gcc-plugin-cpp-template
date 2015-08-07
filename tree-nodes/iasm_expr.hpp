
#include "tcwrapper.hpp"
class TC_IASM_EXPR:public TCWrapper < IASM_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
