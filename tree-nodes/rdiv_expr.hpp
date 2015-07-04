
#include "tcwrapper.hpp"
class TC_RDIV_EXPR : public TCWrapper<RDIV_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
