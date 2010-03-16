--- src/manager.cpp.orig	2009-10-29 16:41:00.000000000 +0700
+++ src/manager.cpp	2009-10-29 16:41:34.000000000 +0700
@@ -1371,7 +1371,7 @@ void Manager::select_style()
     filters << "*.stl";
     file_dialog->set_name_filters(filters); // show only style file (.stl)
     file_dialog->set_filter(QDir::NoDotAndDotDot | QDir::AllDirs | QDir::Files);
-    file_dialog->set_path(QCoreApplication::applicationDirPath() + "/theme/");
+    file_dialog->set_path("/usr/local/share/antico/theme/");
     file_dialog->set_read_only(true);
 
     if (file_dialog->exec() == QDialog::Accepted)
