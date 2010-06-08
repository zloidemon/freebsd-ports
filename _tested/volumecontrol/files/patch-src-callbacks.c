--- src/callbacks.c.orig	2006-02-02 23:52:15.000000000 +0700
+++ src/callbacks.c	2010-06-08 13:56:56.000000000 +0800
@@ -8,7 +8,7 @@
 #include "interface.h"
 #include "actions.h"
 
-#include <linux/soundcard.h>
+#include <sys/soundcard.h>
 #include <stdio.h>                      
 #include <fcntl.h>                      
 #include <string.h>
