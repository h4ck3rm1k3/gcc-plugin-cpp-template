
#include "tcwrapper.hpp"
class TC_EXIT_EXPR : public TCWrapper<EXIT_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
