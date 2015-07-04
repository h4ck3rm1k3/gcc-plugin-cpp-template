
#include "tcwrapper.hpp"
class TC_STATIC_ASSERT : public TCWrapper<STATIC_ASSERT> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
