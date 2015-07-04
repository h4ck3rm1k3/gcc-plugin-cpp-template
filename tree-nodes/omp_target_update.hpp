
#include "tcwrapper.hpp"
class TC_OMP_TARGET_UPDATE : public TCWrapper<OMP_TARGET_UPDATE> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
