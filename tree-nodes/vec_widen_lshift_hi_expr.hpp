
#include "tcwrapper.hpp"
class TC_VEC_WIDEN_LSHIFT_HI_EXPR:public TCWrapper <
  VEC_WIDEN_LSHIFT_HI_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
