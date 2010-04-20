--- threading_pthread.c.orig	2010-04-07 18:37:14.000000000 +0800
+++ threading_pthread.c	2010-04-20 22:17:22.000000000 +0800
@@ -180,6 +180,7 @@
 cond_wait (uintptr_t c, uintptr_t m) {
     pthread_cond_t *cond = (pthread_cond_t *)c;
     pthread_mutex_t *mutex = (pthread_mutex_t *)m;
+    mutex_lock (m);
     int err = pthread_cond_wait (cond, mutex);
     if (err != 0) {
         fprintf (stderr, "pthread_cond_wait failed: %s\n", strerror (err));
