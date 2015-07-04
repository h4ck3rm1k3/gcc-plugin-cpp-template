
#include "tcwrapper.hpp"
class TC_OMP_TASK : public TCWrapper<OMP_TASK> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
