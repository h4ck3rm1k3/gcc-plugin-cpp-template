
#include "tcwrapper.hpp"
class TC_CTOR_INITIALIZER : public TCWrapper<CTOR_INITIALIZER> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
