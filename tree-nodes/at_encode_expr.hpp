
#include "tcwrapper.hpp"
class TC_AT_ENCODE_EXPR:public TCWrapper < AT_ENCODE_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
