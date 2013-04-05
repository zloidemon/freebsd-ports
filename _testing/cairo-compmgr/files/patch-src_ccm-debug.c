--- src/ccm-debug.c.orig	2013-04-05 11:55:43.677363857 +0000
+++ src/ccm-debug.c	2013-04-05 12:29:18.249364055 +0000
@@ -264,14 +264,14 @@
     struct file_match *match = data;
     /* This code is modeled from Gfind_proc_info-lsb.c:callback() from libunwind */
     long n;
-    const ElfW(Phdr) *phdr;
-    ElfW(Addr) load_base = info->dlpi_addr;
+    const Elf_Phdr *phdr;
+    Elf_Addr load_base = info->dlpi_addr;
     phdr = info->dlpi_phdr;
     for (n = info->dlpi_phnum; --n >= 0; phdr++) 
     {
         if (phdr->p_type == PT_LOAD) 
         {
-            ElfW(Addr) vaddr = phdr->p_vaddr + load_base;
+            Elf_Addr vaddr = phdr->p_vaddr + load_base;
             if (match->address >= (void*)vaddr && match->address < (void*)(vaddr + phdr->p_memsz)) 
             {
                 /* we found a match */
