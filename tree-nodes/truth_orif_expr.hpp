
#include "tcwrapper.hpp"
class TC_TRUTH_ORIF_EXPR:public TCWrapper < TRUTH_ORIF_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
