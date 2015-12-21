# 1 "/usr/include/glob.h"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 312 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/usr/include/glob.h" 2
# 21 "/usr/include/glob.h"
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 342 "/usr/include/features.h" 3 4
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 343 "/usr/include/features.h" 2 3 4
# 388 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 389 "/usr/include/features.h" 2 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 402 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 403 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 22 "/usr/include/glob.h" 2





typedef long unsigned int __size_t;

typedef long unsigned int size_t;
# 80 "/usr/include/glob.h"
struct stat;

typedef struct
  {
    __size_t gl_pathc;
    char **gl_pathv;
    __size_t gl_offs;
    int gl_flags;



    void (*gl_closedir) (void *);

    struct dirent *(*gl_readdir) (void *);



    void *(*gl_opendir) (const char *);

    int (*gl_lstat) (const char *__restrict, struct stat *__restrict);
    int (*gl_stat) (const char *__restrict, struct stat *__restrict);




  } glob_t;



struct stat64;

typedef struct
  {
    __size_t gl_pathc;
    char **gl_pathv;
    __size_t gl_offs;
    int gl_flags;



    void (*gl_closedir) (void *);

    struct dirent64 *(*gl_readdir) (void *);



    void *(*gl_opendir) (const char *);

    int (*gl_lstat) (const char *__restrict, struct stat64 *__restrict);
    int (*gl_stat) (const char *__restrict, struct stat64 *__restrict);




  } glob64_t;
# 146 "/usr/include/glob.h"
extern int glob (const char *__restrict __pattern, int __flags,
   int (*__errfunc) (const char *, int),
   glob_t *__restrict __pglob) __attribute__ ((__nothrow__ ));


extern void globfree (glob_t *__pglob) __attribute__ ((__nothrow__ ));
# 162 "/usr/include/glob.h"
extern int glob64 (const char *__restrict __pattern, int __flags,
     int (*__errfunc) (const char *, int),
     glob64_t *__restrict __pglob) __attribute__ ((__nothrow__ ));

extern void globfree64 (glob64_t *__pglob) __attribute__ ((__nothrow__ ));
# 176 "/usr/include/glob.h"
extern int glob_pattern_p (const char *__pattern, int __quote) __attribute__ ((__nothrow__ ));
