#include "tcwrapper.hpp"
class TC_TYPE_DECL  : public TCWrapper<TYPE_DECL>{
public:

  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
