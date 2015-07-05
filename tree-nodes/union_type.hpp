#include "tcwrapper.hpp"
class TC_UNION_TYPE  : public TCWrapper<UNION_TYPE>{
public:
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);

};
