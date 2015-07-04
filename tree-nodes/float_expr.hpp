
#include "tcwrapper.hpp"
class TC_FLOAT_EXPR : public TCWrapper<FLOAT_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
