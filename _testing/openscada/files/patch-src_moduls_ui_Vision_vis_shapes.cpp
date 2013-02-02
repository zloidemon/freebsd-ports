--- src/moduls/ui/Vision/vis_shapes.cpp.orig	2011-04-02 04:54:10.000000000 +0800
+++ src/moduls/ui/Vision/vis_shapes.cpp	2011-04-02 05:40:10.000000000 +0800
@@ -22,31 +22,31 @@
 #include <math.h>
 #include <algorithm>
 
-#include <QEvent>
-#include <QPainter>
-#include <QVBoxLayout>
-#include <QStackedWidget>
-#include <QPushButton>
-#include <QLineEdit>
-#include <QTextEdit>
-#include <QCheckBox>
-#include <QComboBox>
-#include <QListWidget>
-#include <QToolBar>
-#include <QAction>
-#include <QMovie>
-#include <QBuffer>
-#include <QPicture>
-#include <QTimer>
-#include <QKeyEvent>
-#include <QTableWidget>
-#include <QDateTime>
-#include <QToolTip>
-#include <QScrollBar>
-#include <QHeaderView>
-#include <QPlastiqueStyle>
+#include <QtCore/QEvent>
+#include <QtGui/QPainter>
+#include <QtGui/QVBoxLayout>
+#include <QtGui/QStackedWidget>
+#include <QtGui/QPushButton>
+#include <QtGui/QLineEdit>
+#include <QtGui/QTextEdit>
+#include <QtGui/QCheckBox>
+#include <QtGui/QComboBox>
+#include <QtGui/QListWidget>
+#include <QtGui/QToolBar>
+#include <QtGui/QAction>
+#include <QtGui/QMovie>
+#include <QtCore/QBuffer>
+#include <QtGui/QPicture>
+#include <QtCore/QTimer>
+#include <QtGui/QKeyEvent>
+#include <QtGui/QTableWidget>
+#include <QtCore/QDateTime>
+#include <QtGui/QToolTip>
+#include <QtGui/QScrollBar>
+#include <QtGui/QHeaderView>
+#include <QtGui/QPlastiqueStyle>
 
-#include <QApplication>
+#include <QtGui/QApplication>
 
 #include <tsys.h>
 #include "tvision.h"
