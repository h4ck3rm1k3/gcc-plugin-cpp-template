
#include "tcwrapper.hpp"
class TC_FMA_EXPR : public TCWrapper<FMA_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
