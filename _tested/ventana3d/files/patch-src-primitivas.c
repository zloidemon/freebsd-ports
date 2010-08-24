--- src/primitivas.c.orig	2005-09-01 08:05:40.000000000 +0800
+++ src/primitivas.c	2010-07-21 23:44:27.000000000 +0800
@@ -20,6 +20,7 @@
 
 
 #include <stdio.h>
+#include <string.h>
 #include <X11/Xlib.h>
 #include "primitivas.h"
 
@@ -77,6 +78,7 @@
    }
    }
    lp:
+   return 0;
    
 }
 
