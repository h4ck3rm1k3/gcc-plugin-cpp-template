
#include "tcwrapper.hpp"
class TC_REAL_TYPE : public TCWrapper<REAL_TYPE> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
