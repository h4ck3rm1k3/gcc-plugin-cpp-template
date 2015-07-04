
#include "tcwrapper.hpp"
class TC_DEFERRED_NOEXCEPT : public TCWrapper<DEFERRED_NOEXCEPT> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
