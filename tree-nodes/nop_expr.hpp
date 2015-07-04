
#include "tcwrapper.hpp"
class TC_NOP_EXPR : public TCWrapper<NOP_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
