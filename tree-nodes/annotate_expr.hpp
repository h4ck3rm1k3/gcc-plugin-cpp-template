
#include "tcwrapper.hpp"
class TC_ANNOTATE_EXPR:public TCWrapper < ANNOTATE_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
