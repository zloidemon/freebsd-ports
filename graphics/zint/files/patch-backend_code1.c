
$FreeBSD: ports/graphics/zint/files/patch-backend_code1.c,v 1.1 2010/03/26 07:21:07 wen Exp $

--- backend/code1.c.orig
+++ backend/code1.c
@@ -28,7 +28,6 @@
 #ifdef __APPLE__
 #include <sys/malloc.h>
 #else
-#include <malloc.h>
 #endif
 
 void horiz(struct zint_symbol *symbol, int row_no, int full)
