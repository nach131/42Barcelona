## /usr/include/i386/limits.h
 `CHAR_BIT`    8       /* number of bits in a char */
 
 `MB_LEN_MAX`  6       /* Allow 31 bit UTF2 */
 
 `SCHAR_MAX`   127     /* min value for a signed char */
 
 `SCHAR_MIN`   (-128)      /* max value for a signed char */

 ---
 `UCHAR_MAX`   255     /* max value for an unsigned char */
 
 `CHAR_MAX`    127     /* max value for a char */
 
 `CHAR_MIN`    (-128)      /* min value for a char */

 `USHRT_MAX`   65535       /* max value for an unsigned short */

 `SHRT_MAX`    32767       /* max value for a short */

 `SHRT_MIN`    (-32768)    /* min value for a short */

---
 `UINT_MAX`    0xffffffff  /* max value for an unsigned int */
 
 `INT_MAX`     2147483647  /* max value for an int */
 
 `INT_MIN`     (-2147483647-1) /* min value for an int */

 `ULONG_MAX`   0xffffffffffffffffUL    /* max unsigned long */

 `LONG_MAX`    0x7fffffffffffffffL /* max signed long */

 `LONG_MIN`    (-0x7fffffffffffffffL-1) /* min signed long */

---

 `ULONG_MAX`   0xffffffffUL    /* max unsigned long */

 `LONG_MAX`    2147483647L /* max signed long */

 `LONG_MIN`    (-2147483647L-1) /* min signed long */

---

 `ULLONG_MAX`  0xffffffffffffffffULL   /* max unsigned long long */

 `LLONG_MAX`   0x7fffffffffffffffLL    /* max signed long long */

 `LLONG_MIN`   (-0x7fffffffffffffffLL-1) /* min signed long long */

 ## /usr/include/sys/syslimits.h

`ARG_MAX`        (256 * 1024) /* max bytes for an exec function */

`CHILD_MAX`          266  /* max simultaneous processes */

`GID_MAX`        2147483647U  /* max value for a gid_t (2^31-2) */

`LINK_MAX`        32767   /* max file link count */

`MAX_CANON`        1024   /* max bytes in term canon input line */

`MAX_INPUT`        1024   /* max bytes in terminal input */

`NAME_MAX`          255   /* max bytes in a file name */

`NGROUPS_MAX`        16   /* max supplemental group id's */

`UID_MAX`        2147483647U  /* max value for a uid_t (2^31-2) */

---

`OPEN_MAX`        10240   /* max open files per process - todo, make a config option? */

---

`PATH_MAX`         1024   /* max bytes in pathname */

`PIPE_BUF`          512   /* max bytes for atomic pipe writes */

---

`BC_BASE_MAX`        99   /* max ibase/obase values in bc(1) */

`BC_DIM_MAX`       2048   /* max array elements in bc(1) */

`BC_SCALE_MAX`           99   /* max scale value in bc(1) */

`BC_STRING_MAX`        1000   /* max const string length in bc(1) */

`CHARCLASS_NAME_MAX`     14   /* max character class name size */

`COLL_WEIGHTS_MAX`        2   /* max weights for order keyword */

`EQUIV_CLASS_MAX`         2

`EXPR_NEST_MAX`          32   /* max expressions nested in expr(1) */

`LINE_MAX`         2048   /* max bytes in an input line */

`RE_DUP_MAX`        255   /* max RE's in interval notation */
