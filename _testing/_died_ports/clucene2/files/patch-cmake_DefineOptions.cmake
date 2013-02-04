--- cmake/DefineOptions.cmake.orig	2012-12-26 15:32:38.969871945 +0400
+++ cmake/DefineOptions.cmake	2012-12-26 15:45:49.333134315 +0400
@@ -48,6 +48,8 @@
             #ADD_DEFINITIONS(-wd4503) # decorated name length exceeded
             #ADD_DEFINITIONS(-wd4786) # identifier was truncated to '255' characters in the debug information
         ENDIF ( NOT MSVC60 )
+    ELSE (MSVC)
+	LINK_DIRECTORIES ("${CMAKE_INSTALL_PREFIX}/lib")
     ENDIF(MSVC)
 
 ENDMACRO (DEFINE_OPTIONS)
