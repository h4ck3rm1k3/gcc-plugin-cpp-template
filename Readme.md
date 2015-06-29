
uses the Debian package for the gcc plugin gcc-5-plugin-dev
and the header file /usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/gcc-plugin.h

# Ideas
1. Serialize the tree on finalise. Be able to load trees on startup on empty
files.
2. Template base switch expressions. base class for created derived classes to
   represent expressions that will have all types in a switch statement that
   you derive from.
