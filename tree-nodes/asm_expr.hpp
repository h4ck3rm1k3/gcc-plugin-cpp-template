
#include "tcwrapper.hpp"
class TC_ASM_EXPR : public TCWrapper<ASM_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
