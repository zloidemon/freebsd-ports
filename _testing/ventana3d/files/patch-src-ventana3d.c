--- src/ventana3d.c.orig	2005-11-20 04:10:16.000000000 +0700
+++ src/ventana3d.c	2010-07-21 23:43:17.000000000 +0800
@@ -57,7 +57,7 @@
 #include <sys/poll.h>
 #include <sys/time.h>
 #include <sys/types.h>
-#include <wait.h>
+#include <sys/wait.h>
 #include <time.h>
 #include <unistd.h>
 #include <X11/Xlib.h>
