--- src/utils/versionparser.h.orig	2009-12-10 00:26:55.000000000 +0700
+++ src/utils/versionparser.h	2009-12-10 00:27:13.000000000 +0700
@@ -4,6 +4,14 @@
 #include <QString>
 #include "utilsexport.h"
 
+#ifdef major
+#undef major
+#endif
+
+#ifdef minor
+#undef minor
+#endif
+
 class UTILS_EXPORT VersionParser 
 {
 public:
