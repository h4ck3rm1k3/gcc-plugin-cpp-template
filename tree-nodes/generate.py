import os
import re

d = open("/usr/lib/gcc/x86_64-linux-gnu/5.1.1/plugin/include/tree.def")

for l in d.readlines():
    #print l
    g = re.match(r'DEFTREECODE \((\w+),',l)
    if not g:
        continue
    #else:
        #print l
    x = g.groups()[0]
    #print "Check",x
    f = x.lower() + ".hpp"
    if os.path.exists(f):
        print "\ttree-nodes/" +f, "\\"
    else:
        #print f
        o = open(f,"w")
        o.write("""
#include "tcwrapper.hpp"
class TC_{code} : public TCWrapper<{code}> {{
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    }};
        """.format(code=x))

    f2 = x.lower() + ".cpp"
    if os.path.exists(f2):
        print "\ttree-nodes/"+f2, "\\"
    else:
        o = open(f2,"w")
        o.write("""
#include "{filename}"
        TC_{code} a{code};

void TC_{code}::finish_type (tree t) {{
        cerr << "finish_type: {code}" << t << endl;
}};

void TC_{code}::finish_decl (tree t) {{
        cerr << "finish_decl: {code}" << t << endl;
}};

void TC_{code}::finish_unit (tree t) {{
        cerr << "finish_unit: {code}" << t << endl;
}};

""".format(code=x,filename=f))
