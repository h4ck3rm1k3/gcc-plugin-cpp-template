
#include "tcwrapper.hpp"
class TC_COMPARE_EXPR : public TCWrapper<COMPARE_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
