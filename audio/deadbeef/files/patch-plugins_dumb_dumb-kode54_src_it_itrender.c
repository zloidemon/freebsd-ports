--- plugins/dumb/dumb-kode54/src/it/itrender.c.orig	2011-03-31 02:20:25.000000000 +0800
+++ plugins/dumb/dumb-kode54/src/it/itrender.c	2011-03-31 02:34:44.000000000 +0800
@@ -3559,7 +3559,6 @@ static void process_playing(DUMB_IT_SIGR
 }
 
 #ifndef __linux__
-static inline float log2(float x) {return (float)log(x)/(float)log(2.0f);}
 #endif
 
 static int delta_to_note(float delta, int base)
