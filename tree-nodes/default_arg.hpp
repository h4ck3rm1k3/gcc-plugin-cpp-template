
#include "tcwrapper.hpp"
class TC_DEFAULT_ARG : public TCWrapper<DEFAULT_ARG> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
