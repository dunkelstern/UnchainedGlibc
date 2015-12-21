# 1 "/usr/include/fenv.h"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 312 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/usr/include/fenv.h" 2
# 25 "/usr/include/fenv.h"
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
# 26 "/usr/include/fenv.h" 2
# 57 "/usr/include/fenv.h"
# 1 "/usr/include/x86_64-linux-gnu/bits/fenv.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/fenv.h" 3 4
enum
  {
    FE_INVALID =

      0x01,
    __FE_DENORM = 0x02,
    FE_DIVBYZERO =

      0x04,
    FE_OVERFLOW =

      0x08,
    FE_UNDERFLOW =

      0x10,
    FE_INEXACT =

      0x20
  };







enum
  {
    FE_TONEAREST =

      0,
    FE_DOWNWARD =

      0x400,
    FE_UPWARD =

      0x800,
    FE_TOWARDZERO =

      0xc00
  };



typedef unsigned short int fexcept_t;






typedef struct
  {
    unsigned short int __control_word;
    unsigned short int __glibc_reserved1;
    unsigned short int __status_word;
    unsigned short int __glibc_reserved2;
    unsigned short int __tags;
    unsigned short int __glibc_reserved3;
    unsigned int __eip;
    unsigned short int __cs_selector;
    unsigned int __opcode:11;
    unsigned int __glibc_reserved4:5;
    unsigned int __data_offset;
    unsigned short int __data_selector;
    unsigned short int __glibc_reserved5;

    unsigned int __mxcsr;

  }
fenv_t;
# 58 "/usr/include/fenv.h" 2






extern int feclearexcept (int __excepts) __attribute__ ((__nothrow__ ));



extern int fegetexceptflag (fexcept_t *__flagp, int __excepts) __attribute__ ((__nothrow__ ));


extern int feraiseexcept (int __excepts) __attribute__ ((__nothrow__ ));



extern int fesetexceptflag (const fexcept_t *__flagp, int __excepts) __attribute__ ((__nothrow__ ));



extern int fetestexcept (int __excepts) __attribute__ ((__nothrow__ ));





extern int fegetround (void) __attribute__ ((__nothrow__ ));


extern int fesetround (int __rounding_direction) __attribute__ ((__nothrow__ ));






extern int fegetenv (fenv_t *__envp) __attribute__ ((__nothrow__ ));




extern int feholdexcept (fenv_t *__envp) __attribute__ ((__nothrow__ ));



extern int fesetenv (const fenv_t *__envp) __attribute__ ((__nothrow__ ));




extern int feupdateenv (const fenv_t *__envp) __attribute__ ((__nothrow__ ));
# 122 "/usr/include/fenv.h"
extern int feenableexcept (int __excepts) __attribute__ ((__nothrow__ ));




extern int fedisableexcept (int __excepts) __attribute__ ((__nothrow__ ));


extern int fegetexcept (void) __attribute__ ((__nothrow__ ));
