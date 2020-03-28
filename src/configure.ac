AC_INIT(manassus, version-0.1)
AC_MSG_NOTICE([Manassus - Autoconfing!])

dnl Switch to a C compiler, and check if it works.
AC_LANG(C)
AC_PROG_CC

dnl Checking for NCurses Library
AC_CHECK_HEADERS(ncurses.h)
AC_SEARCH_LIBS(ncurses)

dnl Process Makefile.in to create Makefile
AC_OUTPUT(Makefile)
