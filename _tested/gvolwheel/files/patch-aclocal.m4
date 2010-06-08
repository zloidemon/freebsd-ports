--- aclocal.m4.orig	2010-04-03 19:20:16.000000000 +0800
+++ aclocal.m4	2010-06-08 13:05:37.000000000 +0800
@@ -416,7 +416,7 @@
 test "x$exec_prefix" = xNONE && exec_prefix=$prefix
 datarootdir=`eval echo "${datarootdir}"`
 if test "x$CATOBJEXT" = "x.mo" ; then
-  localedir=`eval echo "${libdir}/locale"`
+  localedir=`eval echo "${prefix}/share/locale"`
 else
   localedir=`eval echo "${datadir}/locale"`
 fi
