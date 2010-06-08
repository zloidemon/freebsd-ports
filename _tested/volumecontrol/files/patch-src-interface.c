--- src/interface.c.orig	2006-02-02 23:12:54.000000000 +0700
+++ src/interface.c	2010-06-08 13:56:12.000000000 +0800
@@ -16,7 +16,7 @@
 #include "interface.h"
 
 
-#include <linux/soundcard.h>
+#include <sys/soundcard.h>
 #include <fcntl.h>
 
 extern int mixer_fd;
