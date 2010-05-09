--- client/web/controller/connection_controller.cpp.orig	2010-05-02 18:14:52.000000000 +0800
+++ client/web/controller/connection_controller.cpp	2010-05-09 22:35:17.000000000 +0800
@@ -33,8 +33,6 @@
     #elif defined __APPLE__
     slash = QString("/");
     os = QString(MACOSX);
-    #elif defined (__FreeBSD__)
-    xmlDocument.append(FREEBSD);
     #else
     slash = QString("/");
     os = QString(LINUX);
