--- src/libVtn3DXML/servidormsg.c.orig	2005-11-02 07:28:45.000000000 +0700
+++ src/libVtn3DXML/servidormsg.c	2010-07-22 00:02:32.000000000 +0800
@@ -18,6 +18,8 @@
  *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
  ***************************************************************************/
 #include <stdio.h>
+#include <stdlib.h>
+#include <string.h>
 #include <sys/types.h>
 #include <sys/ipc.h>
 #include <sys/msg.h>
