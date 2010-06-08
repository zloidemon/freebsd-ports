--- src/actions.c.orig	2010-04-03 19:10:49.000000000 +0800
+++ src/actions.c	2010-06-08 12:37:28.000000000 +0800
@@ -17,7 +17,7 @@
  * with this program.  If not, see <http://www.gnu.org/licenses/>.
  */
  
-#include <linux/soundcard.h>
+#include <sys/soundcard.h>
 #include <stdio.h>
 #include <fcntl.h>
 #include <string.h>
