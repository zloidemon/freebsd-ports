--- src/moduls/ui/Vision/vis_shape_elfig.cpp.orig	2011-04-02 04:54:10.000000000 +0800
+++ src/moduls/ui/Vision/vis_shape_elfig.cpp	2011-04-02 05:04:09.000000000 +0800
@@ -24,12 +24,12 @@
 #include <string.h>
 #include <algorithm>
 
-#include <QToolBar>
-#include <QEvent>
-#include <QPainter>
-#include <QMouseEvent>
-#include <QApplication>
-#include <QStatusBar>
+#include <QtGui/QToolBar>
+#include <QtCore/QEvent>
+#include <QtGui/QPainter>
+#include <QtGui/QMouseEvent>
+#include <QtGui/QApplication>
+#include <QtGui/QStatusBar>
 
 #include <tsys.h>
 
