--- setup.py.orig	2010-09-14 06:05:58.000000000 +0800
+++ setup.py	2011-03-30 22:08:33.000000000 +0800
@@ -50,14 +50,9 @@ setup(
     data_files = [
         ("share/xyzcmd/conf", glob.glob("conf/*")),
         ("share/xyzcmd/skins", glob.glob("skins/*")),
-        ("share/doc/xyzcmd/api", glob.glob("doc/api/*")),
-        ("share/doc/xyzcmd", ["ChangeLog", "doc/overview.pdf"]),
         ("share/man/man1", ["doc/xyzcmd.1"])
         ] +
-    include_rec("locale", "share/xyzcmd/%s") +
-    include_rec("plugins", "share/xyzcmd/%s") +
-    include_rec("doc/user-manual", "share/doc/xyzcmd/%s",
-                lambda x: x.replace("doc/user-manual", "user-manual")),
+    include_rec("plugins", "share/xyzcmd/%s"),
     
     requires = ["urwid"],
 
