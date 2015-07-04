
#include "tcwrapper.hpp"
class TC_POINTER_TYPE : public TCWrapper<POINTER_TYPE> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
