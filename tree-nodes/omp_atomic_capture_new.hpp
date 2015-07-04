
#include "tcwrapper.hpp"
class TC_OMP_ATOMIC_CAPTURE_NEW : public TCWrapper<OMP_ATOMIC_CAPTURE_NEW> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
