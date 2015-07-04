
#include "tcwrapper.hpp"
class TC_OACC_PARALLEL : public TCWrapper<OACC_PARALLEL> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
        