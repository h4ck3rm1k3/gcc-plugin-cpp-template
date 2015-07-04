
#include "tcwrapper.hpp"
class TC_TEMPLATE_PARM_INDEX : public TCWrapper<TEMPLATE_PARM_INDEX> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
