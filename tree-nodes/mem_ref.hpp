
#include "tcwrapper.hpp"
class TC_MEM_REF : public TCWrapper<MEM_REF> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
