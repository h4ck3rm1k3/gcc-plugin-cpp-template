
#include "tcwrapper.hpp"
class TC_AGGR_INIT_EXPR : public TCWrapper<AGGR_INIT_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
