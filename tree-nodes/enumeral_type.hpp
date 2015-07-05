#pragma once
#include "tcwrapper.hpp"


class TC_ENUMERAL_TYPE : public TCWrapper<ENUMERAL_TYPE> {
public:
  
  virtual void finish_type (tree t);
  virtual void finish_decl (tree t);
  virtual void finish_unit (tree t);
};
