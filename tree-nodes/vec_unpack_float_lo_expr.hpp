
#include "tcwrapper.hpp"
class TC_VEC_UNPACK_FLOAT_LO_EXPR:public TCWrapper <
  VEC_UNPACK_FLOAT_LO_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
