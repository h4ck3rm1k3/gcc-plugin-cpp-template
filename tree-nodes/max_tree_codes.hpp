
#include "tcwrapper.hpp"
class TC_MAX_TREE_CODES:public TCWrapper < MAX_TREE_CODES >
{
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
