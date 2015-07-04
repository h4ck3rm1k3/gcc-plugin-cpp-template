
#include "tcwrapper.hpp"
class TC_OMP_TARGET : public TCWrapper<OMP_TARGET> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
