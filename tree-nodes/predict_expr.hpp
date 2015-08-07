
#include "tcwrapper.hpp"
class TC_PREDICT_EXPR:public TCWrapper < PREDICT_EXPR >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
