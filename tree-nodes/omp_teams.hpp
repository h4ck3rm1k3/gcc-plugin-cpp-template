
#include "tcwrapper.hpp"
class TC_OMP_TEAMS : public TCWrapper<OMP_TEAMS> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
