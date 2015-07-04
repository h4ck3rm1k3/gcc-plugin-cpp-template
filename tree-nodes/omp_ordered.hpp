
#include "tcwrapper.hpp"
class TC_OMP_ORDERED : public TCWrapper<OMP_ORDERED> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
