
#include "tcwrapper.hpp"
class TC_OACC_LOOP : public TCWrapper<OACC_LOOP> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
        