
#include "tcwrapper.hpp"
class TC_EQ_EXPR : public TCWrapper<EQ_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
