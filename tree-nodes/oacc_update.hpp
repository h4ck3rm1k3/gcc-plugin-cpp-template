
#include "tcwrapper.hpp"
class TC_OACC_UPDATE : public TCWrapper<OACC_UPDATE> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
        