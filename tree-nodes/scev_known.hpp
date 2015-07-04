
#include "tcwrapper.hpp"
class TC_SCEV_KNOWN : public TCWrapper<SCEV_KNOWN> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
