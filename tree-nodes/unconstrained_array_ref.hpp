
#include "tcwrapper.hpp"
class TC_UNCONSTRAINED_ARRAY_REF : public TCWrapper<UNCONSTRAINED_ARRAY_REF> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
