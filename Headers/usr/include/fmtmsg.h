# 1 "/usr/include/fmtmsg.h"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 312 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/usr/include/fmtmsg.h" 2
# 22 "/usr/include/fmtmsg.h"
# 1 "/usr/include/features.h" 1 3 4
# 342 "/usr/include/features.h" 3 4
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 343 "/usr/include/features.h" 2 3 4
# 364 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 402 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 403 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 365 "/usr/include/features.h" 2 3 4
# 388 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 389 "/usr/include/features.h" 2 3 4
# 23 "/usr/include/fmtmsg.h" 2





enum
{
  MM_HARD = 0x001,

  MM_SOFT = 0x002,

  MM_FIRM = 0x004,

  MM_APPL = 0x008,

  MM_UTIL = 0x010,

  MM_OPSYS = 0x020,

  MM_RECOVER = 0x040,

  MM_NRECOV = 0x080,

  MM_PRINT = 0x100,

  MM_CONSOLE = 0x200

};


enum
{
  MM_NOSEV = 0,

  MM_HALT,

  MM_ERROR,

  MM_WARNING,


  MM_INFO

};
# 79 "/usr/include/fmtmsg.h"
enum
{
  MM_NOTOK = -1,

  MM_OK = 0,

  MM_NOMSG = 1,

  MM_NOCON = 4

};




extern int fmtmsg (long int __classification, const char *__label,
     int __severity, const char *__text,
     const char *__action, const char *__tag);



extern int addseverity (int __severity, const char *__string) __attribute__ ((__nothrow__ ));
