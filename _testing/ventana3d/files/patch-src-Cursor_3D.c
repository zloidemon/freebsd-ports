--- src/Cursor_3D.c.orig	2005-11-13 07:33:59.000000000 +0700
+++ src/Cursor_3D.c	2010-07-22 00:22:29.000000000 +0800
@@ -18,6 +18,7 @@
  *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
  ***************************************************************************/
 #include <stdio.h>
+#include <math.h>
 #include <GL/gl.h>
 #include <X11/Xlib.h>
 #include "tipos.h"
@@ -430,6 +431,7 @@
 
 
 SALIR:
+	return 0;
 
 
 
