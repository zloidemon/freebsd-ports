--- src/moduls/ui/QTStarter/tuimod.cpp.orig	2011-04-02 06:27:39.000000000 +0800
+++ src/moduls/ui/QTStarter/tuimod.cpp	2011-04-02 06:29:32.000000000 +0800
@@ -22,20 +22,20 @@
 #include <sys/types.h>
 #include <unistd.h>
 
-#include <QApplication>
-#include <QMainWindow>
-#include <QMenuBar>
-#include <QToolBar>
-#include <QAction>
-#include <QImage>
-#include <QPushButton>
-#include <QLayout>
-#include <QFrame>
-#include <QVBoxLayout>
-#include <QTextCodec>
-#include <QTimer>
-#include <QSplashScreen>
-#include <QLocale>
+#include <QtGui/QApplication>
+#include <QtGui/QMainWindow>
+#include <QtGui/QMenuBar>
+#include <QtGui/QToolBar>
+#include <QtGui/QAction>
+#include <QtGui/QImage>
+#include <QtGui/QPushButton>
+#include <QtGui/QLayout>
+#include <QtGui/QFrame>
+#include <QtGui/QVBoxLayout>
+#include <QtCore/QTextCodec>
+#include <QtCore/QTimer>
+#include <QtGui/QSplashScreen>
+#include <QtCore/QLocale>
 
 #include <tsys.h>
 #include <tmess.h>
