--- src/src.pro.orig	2012-08-06 13:29:14.555159818 +0400
+++ src/src.pro	2012-08-06 13:32:39.897828509 +0400
@@ -41,12 +41,12 @@
 # Installation
 headers.files = $$INSTALL_HEADERS
 headers.path = $$PREFIX/include/qxmpp
-target.path = $$PREFIX/$$LIBDIR
+target.path = $$PREFIX/%%QT_LIBDIR_REL%%
 INSTALLS += headers target
 
 # pkg-config support
 CONFIG += create_pc create_prl no_install_prl
-QMAKE_PKGCONFIG_DESTDIR = pkgconfig
+QMAKE_PKGCONFIG_DESTDIR = $$QXMPP_LIBRARY_DIR/../../libdata/pkgconfig
 QMAKE_PKGCONFIG_LIBDIR = $$target.path
 QMAKE_PKGCONFIG_INCDIR = $$headers.path
 equals(QXMPP_LIBRARY_TYPE,staticlib) {
