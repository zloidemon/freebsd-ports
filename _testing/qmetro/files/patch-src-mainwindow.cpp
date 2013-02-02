--- src/mainwindow.cpp.orig	2011-10-22 01:06:38.000000000 +0000
+++ src/mainwindow.cpp	2012-01-08 15:18:20.308273490 +0000
@@ -74,7 +74,7 @@
  Config.appFont=qApp->font();
  appPath=qApp->applicationDirPath()+"/";
  appConfigFile=cachePath="";
-#ifdef Q_OS_LINUX
+#if defined(Q_OS_LINUX) || defined(Q_OS_FREEBSD)
  QString home=qgetenv("HOME");
  appPath="/usr/share/qmetro/";
  if(!home.isEmpty())
@@ -217,7 +217,7 @@
   //setCentralWidget(map);
  }
 
-#ifdef Q_OS_LINUX
+#if defined(Q_OS_LINUX) || defined (Q_OS_FREEBSD)
  ui->menuHelp->setIcon(QIcon());
 #endif
 #ifdef Q_OS_SYMBIAN
