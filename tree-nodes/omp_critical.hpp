
#include "tcwrapper.hpp"
class TC_OMP_CRITICAL : public TCWrapper<OMP_CRITICAL> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
