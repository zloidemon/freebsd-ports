--- src/iconos_escritorio.c.orig	2005-11-03 15:45:44.000000000 +0700
+++ src/iconos_escritorio.c	2010-07-21 23:49:16.000000000 +0800
@@ -1595,6 +1595,7 @@
     }/*B*/
 
 Salir_Ventana:
+    return 0;
     }/*ABC*/    
 }/*A*/
 
@@ -1647,6 +1648,7 @@
 
     }/*BW*/
 Salir_Menus:
+    return 0;
 }/*WW*/
 
 #endif
