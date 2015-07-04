
#include "tcwrapper.hpp"
class TC_COMPOUND_LITERAL_EXPR : public TCWrapper<COMPOUND_LITERAL_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
