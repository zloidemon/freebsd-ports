--- src/moduls/transport/SSL/modssl.h.orig	2011-04-01 20:52:39.000000000 +0800
+++ src/moduls/transport/SSL/modssl.h	2011-04-01 20:54:22.000000000 +0800
@@ -28,6 +28,9 @@
 #include "openssl/err.h"
 
 #include <ttransports.h>
+#include <netinet/in.h>
+#include <sys/types.h>
+#include <sys/socket.h>
 
 #undef _
 #define _(mess) mod->I18N(mess)
