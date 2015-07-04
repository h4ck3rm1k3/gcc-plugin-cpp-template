
#include "tcwrapper.hpp"
class TC_FIXED_CST : public TCWrapper<FIXED_CST> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
