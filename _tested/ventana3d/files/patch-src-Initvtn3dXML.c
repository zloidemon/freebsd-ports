--- src/Initvtn3dXML.c.orig	2005-11-03 16:43:45.000000000 +0700
+++ src/Initvtn3dXML.c	2010-07-22 00:21:28.000000000 +0800
@@ -20,6 +20,8 @@
 
 #include <stdio.h>
 #include <stdlib.h>
+#include <unistd.h>
+#include <string.h>
 #include <errno.h>
 #include <fcntl.h>
 #include <sys/types.h>
