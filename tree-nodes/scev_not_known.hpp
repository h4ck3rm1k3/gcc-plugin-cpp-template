
#include "tcwrapper.hpp"
class TC_SCEV_NOT_KNOWN : public TCWrapper<SCEV_NOT_KNOWN> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
