
#include "tcwrapper.hpp"
class TC_STMT_EXPR : public TCWrapper<STMT_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
