
#include "tcwrapper.hpp"
class TC_UNBOUND_CLASS_TEMPLATE : public TCWrapper<UNBOUND_CLASS_TEMPLATE> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
