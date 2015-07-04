
#include "tcwrapper.hpp"
class TC_TEMPLATE_INFO : public TCWrapper<TEMPLATE_INFO> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
