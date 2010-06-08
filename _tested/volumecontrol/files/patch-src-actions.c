--- src/actions.c.orig	2006-02-03 00:12:52.000000000 +0700
+++ src/actions.c	2010-06-08 13:56:30.000000000 +0800
@@ -1,5 +1,5 @@
 
-#include <linux/soundcard.h>
+#include <sys/soundcard.h>
 #include <stdio.h>
 #include <fcntl.h>
 #include <string.h>
