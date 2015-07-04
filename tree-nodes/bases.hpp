
#include "tcwrapper.hpp"
class TC_BASES : public TCWrapper<BASES> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
