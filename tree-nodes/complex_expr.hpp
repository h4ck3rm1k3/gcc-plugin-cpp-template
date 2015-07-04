
#include "tcwrapper.hpp"
class TC_COMPLEX_EXPR : public TCWrapper<COMPLEX_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
