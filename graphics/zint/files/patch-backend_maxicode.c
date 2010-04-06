
$FreeBSD: ports/graphics/zint/files/patch-backend_maxicode.c,v 1.1 2010/03/26 07:21:07 wen Exp $

--- backend/maxicode.c.orig
+++ backend/maxicode.c
@@ -29,7 +29,6 @@
 #ifdef __APPLE__
 #include <sys/malloc.h> 
 #else
-#include <malloc.h> 
 #endif
 
 int maxi_codeword[144];
