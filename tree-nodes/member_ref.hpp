
#include "tcwrapper.hpp"
class TC_MEMBER_REF:public TCWrapper < MEMBER_REF >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
