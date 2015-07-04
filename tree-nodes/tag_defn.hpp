
#include "tcwrapper.hpp"
class TC_TAG_DEFN : public TCWrapper<TAG_DEFN> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
