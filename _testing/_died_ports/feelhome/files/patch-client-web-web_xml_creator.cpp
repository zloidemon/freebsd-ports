--- client/web/web_xml_creator.cpp.orig	2010-02-18 00:01:58.000000000 +0700
+++ client/web/web_xml_creator.cpp	2010-05-09 22:40:53.000000000 +0800
@@ -56,8 +56,6 @@
     xmlDocument.append(LINUX);
     #elif defined __APPLE__
     xmlDocument.append(MACOSX);
-    #elif defined (__FreeBSD__)
-    xmlDocument.append(FREEBSD);
     #else
     xmlDocument.append(LINUX);
     #endif
@@ -111,8 +109,6 @@
     xmlDocument.append(LINUX);
     #elif defined __APPLE__
     xmlDocument.append(MACOSX);
-    #elif defined (__FreeBSD__)
-    xmlDocument.append(FREEBSD);
     #else
     xmlDocument.append(LINUX);
     #endif
