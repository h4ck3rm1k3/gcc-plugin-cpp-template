#include "tcwrapper.hpp"
class TC_ERROR_MARK  : public TCWrapper<ERROR_MARK>{
public:
  virtual void finish_type (tree t);
};
