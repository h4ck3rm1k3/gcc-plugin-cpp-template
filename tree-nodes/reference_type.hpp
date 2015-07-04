
#include "tcwrapper.hpp"
class TC_REFERENCE_TYPE : public TCWrapper<REFERENCE_TYPE> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
