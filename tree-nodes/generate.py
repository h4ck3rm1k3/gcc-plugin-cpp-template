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

    print """Return call_type_{code}(tree b) {{ return 0; }}""".format(code=x)

#     print """
# case TC_{code}::t_code_c:
#     return ((Context*)this)->call_type_{code}(t);
#     break;
# """.format(code=x)
    
    f = x.lower() + ".hpp"
    if os.path.exists(f):
        #print "#include \"tree-nodes/{f}\"".format(f=f)
        #print "\ttree-nodes/" +f, "\\"
        pass
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
        #print "\ttree-nodes/"+f2, "\\"
        pass
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
