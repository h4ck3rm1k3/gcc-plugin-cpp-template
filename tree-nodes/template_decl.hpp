
#include "tcwrapper.hpp"
class TC_TEMPLATE_DECL : public TCWrapper<TEMPLATE_DECL> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
