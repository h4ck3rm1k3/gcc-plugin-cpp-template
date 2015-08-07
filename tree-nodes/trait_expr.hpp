
#include "tcwrapper.hpp"
class TC_TRAIT_EXPR:public TCWrapper < TRAIT_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
