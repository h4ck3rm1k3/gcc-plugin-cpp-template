
#include "tcwrapper.hpp"
class TC_PROTOCOL_INTERFACE_TYPE : public TCWrapper<PROTOCOL_INTERFACE_TYPE> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
