
#include "tcwrapper.hpp"
class TC_POSTINCREMENT_EXPR : public TCWrapper<POSTINCREMENT_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
