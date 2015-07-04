
#include "tcwrapper.hpp"
class TC_LTGT_EXPR : public TCWrapper<LTGT_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
