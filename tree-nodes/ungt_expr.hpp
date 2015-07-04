
#include "tcwrapper.hpp"
class TC_UNGT_EXPR : public TCWrapper<UNGT_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
