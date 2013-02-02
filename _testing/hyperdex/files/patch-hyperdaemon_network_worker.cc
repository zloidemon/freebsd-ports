--- hyperdaemon/network_worker.cc.orig	2012-12-29 21:46:08.271909482 +0400
+++ hyperdaemon/network_worker.cc	2012-12-29 22:03:50.189526945 +0400
@@ -100,7 +100,8 @@
     entityid to;
     network_msgtype type;
     std::auto_ptr<e::buffer> msg;
-    unsigned int seed = pthread_self();
+    pthread_t seed = pthread_self();
+
 
     while (m_continue && m_comm->recv(&from, &to, &type, &msg))
     {
@@ -390,7 +391,7 @@
             LOG(INFO) << "Message of unknown type received.";
         }
 
-        if (rand_r(&seed) < (0.01 * RAND_MAX))
+        if (rand_r((unsigned int *)&seed) < (0.01 * RAND_MAX))
         {
             m_data->flush(to.get_region(), 100000, true);
         }
