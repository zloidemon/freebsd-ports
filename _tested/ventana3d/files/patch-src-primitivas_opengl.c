--- src/primitivas_opengl.c.orig	2005-11-15 04:57:28.000000000 +0700
+++ src/primitivas_opengl.c	2010-07-22 00:27:45.000000000 +0800
@@ -21,6 +21,9 @@
 
 
 #include <stdio.h>
+#include <string.h>
+#include <stdlib.h>
+#include <math.h>
 #include <X11/Xlib.h>
 #include <X11/extensions/Xevie.h>
 #include "tipos.h"
@@ -1062,6 +1065,7 @@
    }*/
 }
 IRTE:
+return 0;
 }
 Ver_t_Foco=0;
 #endif
