--- cmake/create_pkgconfig_file.cmake.orig	2013-01-28 19:24:22.620446403 +0400
+++ cmake/create_pkgconfig_file.cmake	2013-01-28 19:26:17.120930124 +0400
@@ -21,5 +21,5 @@
 
 ")
 
-    install(FILES ${_pkgfname} DESTINATION lib${LIB_SUFFIX}/pkgconfig)
+    install(FILES ${_pkgfname} DESTINATION ${CMAKE_INSTALL_PREFIX}/libdata/pkgconfig)
 endmacro()
