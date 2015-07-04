
#include "tcwrapper.hpp"
class TC_PARM_DECL : public TCWrapper<PARM_DECL> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
