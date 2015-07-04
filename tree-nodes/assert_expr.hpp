
#include "tcwrapper.hpp"
class TC_ASSERT_EXPR : public TCWrapper<ASSERT_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
