--- src/moduls/transport/Sockets/socket.h.orig	2011-04-01 20:51:29.000000000 +0800
+++ src/moduls/transport/Sockets/socket.h	2011-04-01 20:51:41.000000000 +0800
@@ -23,6 +23,7 @@
 #define SOCKET_H
 
 #include <pthread.h>
+#include <signal.h>
 
 #include <ttransports.h>
 
