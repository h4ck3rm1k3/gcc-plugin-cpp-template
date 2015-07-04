
#include "tcwrapper.hpp"
class TC_NONTYPE_ARGUMENT_PACK : public TCWrapper<NONTYPE_ARGUMENT_PACK> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
