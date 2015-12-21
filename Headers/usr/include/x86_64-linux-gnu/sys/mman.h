# 1 "/usr/include/x86_64-linux-gnu/sys/mman.h"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 312 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/mman.h" 2
# 22 "/usr/include/x86_64-linux-gnu/sys/mman.h"
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
# 23 "/usr/include/x86_64-linux-gnu/sys/mman.h" 2
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 122 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 24 "/usr/include/x86_64-linux-gnu/sys/mman.h" 2

# 1 "/usr/lib/llvm-3.6/bin/../lib/clang/3.6.2/include/stddef.h" 1 3
# 62 "/usr/lib/llvm-3.6/bin/../lib/clang/3.6.2/include/stddef.h" 3
typedef long unsigned int size_t;
# 26 "/usr/include/x86_64-linux-gnu/sys/mman.h" 2



typedef __off_t off_t;







typedef __mode_t mode_t;




# 1 "/usr/include/x86_64-linux-gnu/bits/mman.h" 1 3 4
# 45 "/usr/include/x86_64-linux-gnu/bits/mman.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mman-linux.h" 1 3 4
# 46 "/usr/include/x86_64-linux-gnu/bits/mman.h" 2 3 4
# 42 "/usr/include/x86_64-linux-gnu/sys/mman.h" 2
# 57 "/usr/include/x86_64-linux-gnu/sys/mman.h"
extern void *mmap (void *__addr, size_t __len, int __prot,
     int __flags, int __fd, __off_t __offset) __attribute__ ((__nothrow__ ));
# 70 "/usr/include/x86_64-linux-gnu/sys/mman.h"
extern void *mmap64 (void *__addr, size_t __len, int __prot,
       int __flags, int __fd, __off64_t __offset) __attribute__ ((__nothrow__ ));




extern int munmap (void *__addr, size_t __len) __attribute__ ((__nothrow__ ));




extern int mprotect (void *__addr, size_t __len, int __prot) __attribute__ ((__nothrow__ ));







extern int msync (void *__addr, size_t __len, int __flags);




extern int madvise (void *__addr, size_t __len, int __advice) __attribute__ ((__nothrow__ ));



extern int posix_madvise (void *__addr, size_t __len, int __advice) __attribute__ ((__nothrow__ ));




extern int mlock (const void *__addr, size_t __len) __attribute__ ((__nothrow__ ));


extern int munlock (const void *__addr, size_t __len) __attribute__ ((__nothrow__ ));




extern int mlockall (int __flags) __attribute__ ((__nothrow__ ));



extern int munlockall (void) __attribute__ ((__nothrow__ ));







extern int mincore (void *__start, size_t __len, unsigned char *__vec)
     __attribute__ ((__nothrow__ ));
# 133 "/usr/include/x86_64-linux-gnu/sys/mman.h"
extern void *mremap (void *__addr, size_t __old_len, size_t __new_len,
       int __flags, ...) __attribute__ ((__nothrow__ ));



extern int remap_file_pages (void *__start, size_t __size, int __prot,
        size_t __pgoff, int __flags) __attribute__ ((__nothrow__ ));




extern int shm_open (const char *__name, int __oflag, mode_t __mode);


extern int shm_unlink (const char *__name);
