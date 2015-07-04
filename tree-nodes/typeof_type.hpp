
#include "tcwrapper.hpp"
class TC_TYPEOF_TYPE : public TCWrapper<TYPEOF_TYPE> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
