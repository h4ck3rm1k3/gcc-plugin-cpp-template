import os
import re
d = open("/usr/lib/gcc/x86_64-linux-gnu/5.1.1/plugin/include/tree.def")

print """
class GeneratedSwitchCall : public SwitchCall<int,DefaultVal>{

GeneratedSwitchCall(tree field) {
    CallBack::check_type(field);
    call<GeneratedSwitchCall>(field);
}
"""
for l in d.readlines():
    g = re.match(r'DEFTREECODE \((\w+),',l)
    if not g:
        continue
    x = g.groups()[0]
    print """
    int call_type_{code}(tree f) {{
        std::cerr << "GeneratedSwitchCall::call_type_{code}";
    }}
    """.format(code=x)
print "};"
