AC_INIT([hello],
  [1.0.0],
  [info@hello.org],
  [hello],
  [http://www.hello.org])

AM_INIT_AUTOMAKE([1.11 subdir-objects -Wno-portability no-define no-dist-gzip dist-xz])
AC_PROG_CC
PKG_PROG_PKG_CONFIG(0.16)
LT_INIT
AC_CHECK_LIB([asd.h],[asda], [AC_MSG_ERROR([Unable to find lin asd])])
PKG_CHECK_MODULES([HELLO_WORLD], ["glib-2.0"])

AC_OUTPUT([
    Makefile
    src/Makefile
    src/libhello/Makefile
    src/libhello/libhello.pc
    src/hello1/Makefile
    src/hello2/Makefile])
