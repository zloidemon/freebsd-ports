--- src/player_ffmpeg.h.orig	2011-03-30 18:37:08.000000000 +0800
+++ src/player_ffmpeg.h	2011-03-30 18:37:33.000000000 +0800
@@ -23,8 +23,8 @@
 extern "C" {
 #define uint64_t UINT64_C
 //#include <stdint.h>
-#include <libavcodec/avcodec.h>
-#include <libavformat/avformat.h>
+#include <avcodec.h>
+#include <avformat.h>
 }
 #include <QtCore>
 #include "player.h"
