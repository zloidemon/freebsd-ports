--- src/iconos_menus.c.orig	2005-11-04 06:18:55.000000000 +0700
+++ src/iconos_menus.c	2010-07-22 00:29:19.000000000 +0800
@@ -18,6 +18,9 @@
  *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
  ***************************************************************************/
 #include <stdio.h>
+#include <stdlib.h>
+#include <math.h>
+#include <unistd.h>
 #include <X11/Xlib.h>
 #include <GL/gl.h>
 #include <GL/glut.h>
@@ -1606,6 +1609,7 @@
 /*  if(giro>=110.00)giro=90.0000;*/
 
 IRTE_ICON:
+  return 0;
 }
 
 
