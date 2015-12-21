# 1 "/usr/include/wordexp.h"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 312 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/usr/include/wordexp.h" 2
# 21 "/usr/include/wordexp.h"
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
# 22 "/usr/include/wordexp.h" 2

# 1 "/usr/lib/llvm-3.6/bin/../lib/clang/3.6.2/include/stddef.h" 1 3
# 62 "/usr/lib/llvm-3.6/bin/../lib/clang/3.6.2/include/stddef.h" 3
typedef long unsigned int size_t;
# 24 "/usr/include/wordexp.h" 2




enum
  {
    WRDE_DOOFFS = (1 << 0),
    WRDE_APPEND = (1 << 1),
    WRDE_NOCMD = (1 << 2),
    WRDE_REUSE = (1 << 3),
    WRDE_SHOWERR = (1 << 4),
    WRDE_UNDEF = (1 << 5),
    __WRDE_FLAGS = (WRDE_DOOFFS | WRDE_APPEND | WRDE_NOCMD |
      WRDE_REUSE | WRDE_SHOWERR | WRDE_UNDEF)
  };


typedef struct
  {
    size_t we_wordc;
    char **we_wordv;
    size_t we_offs;
  } wordexp_t;


enum
  {

    WRDE_NOSYS = -1,

    WRDE_NOSPACE = 1,
    WRDE_BADCHAR,
    WRDE_BADVAL,
    WRDE_CMDSUB,
    WRDE_SYNTAX
  };


extern int wordexp (const char *__restrict __words,
      wordexp_t *__restrict __pwordexp, int __flags);


extern void wordfree (wordexp_t *__wordexp) __attribute__ ((__nothrow__ ));
