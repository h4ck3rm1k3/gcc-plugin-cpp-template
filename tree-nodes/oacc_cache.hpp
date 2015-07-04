
#include "tcwrapper.hpp"
class TC_OACC_CACHE : public TCWrapper<OACC_CACHE> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
        