
#include "tcwrapper.hpp"
class TC_TREE_BINFO:public TCWrapper < TREE_BINFO >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
