
#include "tcwrapper.hpp"
class TC_TREE_VEC:public TCWrapper < TREE_VEC >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
