--- applet/FancyTasksIcon.cpp.orig	2010-04-27 22:47:11.000000000 +0800
+++ applet/FancyTasksIcon.cpp	2010-06-11 10:00:19.000000000 +0800
@@ -46,12 +46,12 @@
 #include <KIO/NetAccess>
 #include <KIO/PreviewJob>
 
-#include <Plasma/Svg>
-#include <Plasma/Theme>
-#include <Plasma/Corona>
-#include <Plasma/Animation>
-#include <Plasma/WindowEffects>
-#include <Plasma/ToolTipManager>
+#include <plasma/svg.h>
+#include <plasma/theme.h>
+#include <plasma/corona.h>
+#include <plasma/animation.h>
+#include <plasma/windoweffects>
+#include <plasma/tooltipmanager.h>
 
 namespace FancyTasks
 {
