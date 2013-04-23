--- ../../source/as_memory.cpp.orig	2013-04-23 09:12:04.795967912 +0000
+++ ../../source/as_memory.cpp	2013-04-23 09:12:22.031967631 +0000
@@ -38,7 +38,7 @@
 
 #include <stdlib.h>
 
-#if !defined(__APPLE__) && !defined( __SNC__ ) && !defined( __ghs__ )
+#if !defined(__APPLE__) && !defined( __SNC__ ) && !defined( __ghs__ ) && !defined(__FreeBSD__)
 #include <malloc.h>
 #endif
 
