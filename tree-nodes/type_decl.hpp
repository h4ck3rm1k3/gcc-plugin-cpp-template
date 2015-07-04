#include "tcwrapper.hpp"
class TC_TYPE_DECL  : public TCWrapper<TYPE_DECL>{
public:
  virtual void finish_type (tree t){
    std::cerr << "typedecl finish" << std::endl;
    tree type = t->typed.type;
    check_type(type);
  }
};
