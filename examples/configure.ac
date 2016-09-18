AC_PREREQ([2.69])
AC_INIT([gcc-plugin-template], [0.1.0], [m@thefr33.com])
AM_INIT_AUTOMAKE()
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_HEADERS([config.h])
AM_MAINTAINER_MODE([disable])

# Disable static libraries by default for now
LT_INIT([disable-static])

# Checks for programs
AC_PROG_CC
AC_PROG_CXX([g++-5 g++-4.9])
AC_PROG_INSTALL
AC_PROG_AWK
AC_PROG_CPP
AC_PROG_INSTALL
AC_PROG_LN_S
AC_PROG_MAKE_SET

# FIXME: Replace `main' with a function in `-lc':
AC_CHECK_LIB([c], [main])
# FIXME: Replace `main' with a function in `-lcrypt':
AC_CHECK_LIB([crypt], [main])
# FIXME: Replace `main' with a function in `-ldl':
AC_CHECK_LIB([dl], [main])
# FIXME: Replace `main' with a function in `-lm':
AC_CHECK_LIB([m], [main])
# FIXME: Replace `main' with a function in `-lpthread':
AC_CHECK_LIB([pthread], [main])

# Checks for header files.
AC_CHECK_HEADERS([string.h])

AC_ENABLE_SHARED
AC_CHECK_HEADER_STDBOOL
AC_FUNC_OBSTACK
AC_LANG_PUSH([C++])
CXXFLAGS=-I$(dirname `${CXX} -print-file-name=plugin/include/gcc-plugin.h`)
AC_MSG_CHECKING([CPPFLAGS are $CPPFLAGS\n]) 
AC_CHECK_HEADERS(`${CXX} -print-file-name=plugin/include/gcc-plugin.h`, [], [
		      AC_MSG_ERROR([Unable to find gcc-plugin headers.])])
AC_LANG_POP([C++])   
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
