--- src/carga_tga.c.orig	2005-08-17 17:23:36.000000000 +0800
+++ src/carga_tga.c	2010-07-22 00:05:11.000000000 +0800
@@ -25,6 +25,8 @@
 
 */
 #include <stdio.h>
+#include <string.h>
+#include <stdlib.h>
 #include <GL/gl.h>
 #include <X11/Xlib.h>
 #include "tipos.h"
