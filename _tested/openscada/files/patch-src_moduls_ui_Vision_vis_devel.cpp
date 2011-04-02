--- src/moduls/ui/Vision/vis_devel.cpp.orig	2011-04-02 04:54:09.000000000 +0800
+++ src/moduls/ui/Vision/vis_devel.cpp	2011-04-02 04:57:55.000000000 +0800
@@ -20,20 +20,20 @@
  *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
  ***************************************************************************/
 
-#include <QApplication>
-#include <QWorkspace>
-#include <QMenu>
-#include <QMenuBar>
-#include <QSignalMapper>
-#include <QCloseEvent>
-#include <QMessageBox>
-#include <QToolBar>
-#include <QStatusBar>
-#include <QPushButton>
-#include <QWhatsThis>
-#include <QTimer>
-#include <QScrollArea>
-#include <QCheckBox>
+#include <QtGui/QApplication>
+#include <QtGui/QWorkspace>
+#include <QtGui/QMenu>
+#include <QtGui/QMenuBar>
+#include <QtCore/QSignalMapper>
+#include <QtGui/QCloseEvent>
+#include <QtGui/QMessageBox>
+#include <QtGui/QToolBar>
+#include <QtGui/QStatusBar>
+#include <QtGui/QPushButton>
+#include <QtGui/QWhatsThis>
+#include <QtCore/QTimer>
+#include <QtGui/QScrollArea>
+#include <QtGui/QCheckBox>
 
 #include <config.h>
 #include <tsys.h>
