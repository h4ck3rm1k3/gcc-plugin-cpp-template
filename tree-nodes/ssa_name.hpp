
#include "tcwrapper.hpp"
class TC_SSA_NAME:public TCWrapper < SSA_NAME >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
