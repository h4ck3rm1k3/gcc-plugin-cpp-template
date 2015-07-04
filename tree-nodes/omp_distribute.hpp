
#include "tcwrapper.hpp"
class TC_OMP_DISTRIBUTE : public TCWrapper<OMP_DISTRIBUTE> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
