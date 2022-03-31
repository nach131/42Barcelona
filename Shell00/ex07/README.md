# ex07

       patch - apply a diff file to an original

SYNOPSIS
   
       patch [options] [originalfile [patchfile]]

       but usually just

       patch -pnum <patchfile

DESCRIPTION

patch takes a patch file patchfile containing a difference listing produced by the diff program and applies those differences to one or more original  files,  producing  patched  versions.   Normally  the  patched  versions are put in place of the originals.  Backups can be made; see the -b or --backup option.  The names of the files to be patched are usually taken from the patch file, but if there's just one file to be patched it can specified on the command line as originalfile.

---
 **resolved**

       patch a sw.diff -o b
