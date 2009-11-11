--- src/antico.cpp.orig	2009-10-29 17:05:18.000000000 +0700
+++ src/antico.cpp	2009-10-29 17:06:18.000000000 +0700
@@ -1036,7 +1036,7 @@ void Antico::set_settings()
         qFatal ("Error on setting antico.cfg");
     }
 
-    QSettings *style = new QSettings(QCoreApplication::applicationDirPath() + "/theme/default/default.stl", QSettings::IniFormat, this);
+    QSettings *style = new QSettings("/usr/local/share/antico/theme/default/default.stl", QSettings::IniFormat, this);
     // set default icon on first installation, if no "/default.stl" is set
     if (style->childGroups().isEmpty())
     {
