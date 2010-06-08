--- src/callbacks.c.orig	2010-04-05 14:51:26.000000000 +0800
+++ src/callbacks.c	2010-06-08 12:37:17.000000000 +0800
@@ -18,7 +18,7 @@
  */
  
  
-#include <linux/soundcard.h>
+#include <sys/soundcard.h>
 #include <stdio.h>
 #include <fcntl.h>
 #include <string.h>
@@ -166,4 +166,4 @@
 gboolean on_timer(gpointer data)
 {
 	 update_tray_image();
-}
\ No newline at end of file
+}
