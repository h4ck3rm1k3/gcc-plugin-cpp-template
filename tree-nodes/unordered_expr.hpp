
#include "tcwrapper.hpp"
class TC_UNORDERED_EXPR:public TCWrapper < UNORDERED_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
