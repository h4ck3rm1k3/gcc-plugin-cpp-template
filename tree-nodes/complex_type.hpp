
#include "tcwrapper.hpp"
class TC_COMPLEX_TYPE : public TCWrapper<COMPLEX_TYPE> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
