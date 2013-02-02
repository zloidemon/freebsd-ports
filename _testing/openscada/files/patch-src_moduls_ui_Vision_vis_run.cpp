--- src/moduls/ui/Vision/vis_run.cpp.orig	2011-04-02 04:54:10.000000000 +0800
+++ src/moduls/ui/Vision/vis_run.cpp	2011-04-02 05:56:45.000000000 +0800
@@ -23,30 +23,28 @@
 #include <sys/stat.h>
 #include <fcntl.h>
 
-#include <linux/input.h>
-
-#include <QApplication>
-#include <QDesktopWidget>
-#include <QMenu>
-#include <QTimer>
-#include <QMenuBar>
-#include <QCloseEvent>
-#include <QMessageBox>
-#include <QStatusBar>
-#include <QWhatsThis>
-#include <QScrollArea>
-#include <QVBoxLayout>
-#include <QListWidget>
-#include <QComboBox>
-#include <QPushButton>
-#include <QDialogButtonBox>
-#include <QPainter>
-#include <QToolBar>
-#include <QPrinter>
-#include <QPrintDialog>
-#include <QDateTime>
-#include <QFileDialog>
-#include <QTextStream>
+#include <QtGui/QApplication>
+#include <QtGui/QDesktopWidget>
+#include <QtGui/QMenu>
+#include <QtCore/QTimer>
+#include <QtGui/QMenuBar>
+#include <QtGui/QCloseEvent>
+#include <QtGui/QMessageBox>
+#include <QtGui/QStatusBar>
+#include <QtGui/QWhatsThis>
+#include <QtGui/QScrollArea>
+#include <QtGui/QVBoxLayout>
+#include <QtGui/QListWidget>
+#include <QtGui/QComboBox>
+#include <QtGui/QPushButton>
+#include <QtGui/QDialogButtonBox>
+#include <QtGui/QPainter>
+#include <QtGui/QToolBar>
+#include <QtGui/QPrinter>
+#include <QtGui/QPrintDialog>
+#include <QtCore/QDateTime>
+#include <QtGui/QFileDialog>
+#include <QtCore/QTextStream>
 
 #include <config.h>
 #include <tsys.h>
@@ -1141,7 +1139,7 @@ void VisRun::alarmSet( unsigned alarm )
     if( isMaster && (ch_tp>>16)&TVision::Alarm )
     {
 	const char *spkEvDev = "/dev/input/by-path/platform-pcspkr-event-spkr";
-	int hd = open(spkEvDev,O_WRONLY);
+/*	int hd = open(spkEvDev,O_WRONLY);
 	if( hd < 0 )	mess_warning(mod->nodePath().c_str(),_("Error open: %s"),spkEvDev);
 	else
 	{
@@ -1152,7 +1150,7 @@ void VisRun::alarmSet( unsigned alarm )
 	    ev.value = ((alarm>>16)&TVision::Alarm) ? 1000 : 0;
 	    write(hd,&ev,sizeof(ev));
 	    ::close(hd);
-	}
+	} */
     }
     //>> Set speach or sound alarm
     if( isMaster && (alarm>>16)&TVision::Sound && !alrmPlay->isRunning() && !alrmPlay->playData().empty() )
