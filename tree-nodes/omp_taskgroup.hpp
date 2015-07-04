
#include "tcwrapper.hpp"
class TC_OMP_TASKGROUP : public TCWrapper<OMP_TASKGROUP> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
