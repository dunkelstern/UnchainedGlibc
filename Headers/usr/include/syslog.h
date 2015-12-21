# 1 "/usr/include/syslog.h"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 312 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/usr/include/syslog.h" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/syslog.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/sys/syslog.h" 3 4
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
# 36 "/usr/include/x86_64-linux-gnu/sys/syslog.h" 2 3 4

# 1 "/usr/lib/llvm-3.6/bin/../lib/clang/3.6.2/include/stdarg.h" 1 3 4
# 30 "/usr/lib/llvm-3.6/bin/../lib/clang/3.6.2/include/stdarg.h" 3 4
typedef __builtin_va_list va_list;
# 50 "/usr/lib/llvm-3.6/bin/../lib/clang/3.6.2/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 38 "/usr/include/x86_64-linux-gnu/sys/syslog.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/syslog-path.h" 1 3 4
# 41 "/usr/include/x86_64-linux-gnu/sys/syslog.h" 2 3 4
# 175 "/usr/include/x86_64-linux-gnu/sys/syslog.h" 3 4
extern void closelog (void);





extern void openlog (const char *__ident, int __option, int __facility);


extern int setlogmask (int __mask) __attribute__ ((__nothrow__ ));





extern void syslog (int __pri, const char *__fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
# 200 "/usr/include/x86_64-linux-gnu/sys/syslog.h" 3 4
extern void vsyslog (int __pri, const char *__fmt, __gnuc_va_list __ap)
     __attribute__ ((__format__ (__printf__, 2, 0)));
# 2 "/usr/include/syslog.h" 2

