# 1 "/usr/include/x86_64-linux-gnu/sys/shm.h"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 312 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/shm.h" 2
# 21 "/usr/include/x86_64-linux-gnu/sys/shm.h"
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
# 22 "/usr/include/x86_64-linux-gnu/sys/shm.h" 2


# 1 "/usr/lib/llvm-3.6/bin/../lib/clang/3.6.2/include/stddef.h" 1 3
# 62 "/usr/lib/llvm-3.6/bin/../lib/clang/3.6.2/include/stddef.h" 3
typedef long unsigned int size_t;
# 25 "/usr/include/x86_64-linux-gnu/sys/shm.h" 2


# 1 "/usr/include/x86_64-linux-gnu/sys/ipc.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/sys/ipc.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/ipctypes.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/ipctypes.h" 3 4
typedef int __ipc_pid_t;
# 29 "/usr/include/x86_64-linux-gnu/sys/ipc.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/ipc.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/ipc.h" 3 4
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
# 23 "/usr/include/x86_64-linux-gnu/bits/ipc.h" 2 3 4
# 42 "/usr/include/x86_64-linux-gnu/bits/ipc.h" 3 4
struct ipc_perm
  {
    __key_t __key;
    __uid_t uid;
    __gid_t gid;
    __uid_t cuid;
    __gid_t cgid;
    unsigned short int mode;
    unsigned short int __pad1;
    unsigned short int __seq;
    unsigned short int __pad2;
    __syscall_ulong_t __glibc_reserved1;
    __syscall_ulong_t __glibc_reserved2;
  };
# 30 "/usr/include/x86_64-linux-gnu/sys/ipc.h" 2 3 4


typedef __uid_t uid_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __key_t key_t;






extern key_t ftok (const char *__pathname, int __proj_id) __attribute__ ((__nothrow__ ));
# 28 "/usr/include/x86_64-linux-gnu/sys/shm.h" 2


# 1 "/usr/include/x86_64-linux-gnu/bits/shm.h" 1 3 4
# 42 "/usr/include/x86_64-linux-gnu/bits/shm.h" 3 4
extern int __getpagesize (void) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



typedef __syscall_ulong_t shmatt_t;


struct shmid_ds
  {
    struct ipc_perm shm_perm;
    size_t shm_segsz;
    __time_t shm_atime;



    __time_t shm_dtime;



    __time_t shm_ctime;



    __pid_t shm_cpid;
    __pid_t shm_lpid;
    shmatt_t shm_nattch;
    __syscall_ulong_t __glibc_reserved4;
    __syscall_ulong_t __glibc_reserved5;
  };
# 84 "/usr/include/x86_64-linux-gnu/bits/shm.h" 3 4
struct shminfo
  {
    __syscall_ulong_t shmmax;
    __syscall_ulong_t shmmin;
    __syscall_ulong_t shmmni;
    __syscall_ulong_t shmseg;
    __syscall_ulong_t shmall;
    __syscall_ulong_t __glibc_reserved1;
    __syscall_ulong_t __glibc_reserved2;
    __syscall_ulong_t __glibc_reserved3;
    __syscall_ulong_t __glibc_reserved4;
  };

struct shm_info
  {
    int used_ids;
    __syscall_ulong_t shm_tot;
    __syscall_ulong_t shm_rss;
    __syscall_ulong_t shm_swp;
    __syscall_ulong_t swap_attempts;
    __syscall_ulong_t swap_successes;
  };
# 31 "/usr/include/x86_64-linux-gnu/sys/shm.h" 2



# 1 "/usr/include/time.h" 1 3 4
# 75 "/usr/include/time.h" 3 4
typedef __time_t time_t;
# 35 "/usr/include/x86_64-linux-gnu/sys/shm.h" 2



typedef __pid_t pid_t;
# 50 "/usr/include/x86_64-linux-gnu/sys/shm.h"
extern int shmctl (int __shmid, int __cmd, struct shmid_ds *__buf) __attribute__ ((__nothrow__ ));


extern int shmget (key_t __key, size_t __size, int __shmflg) __attribute__ ((__nothrow__ ));


extern void *shmat (int __shmid, const void *__shmaddr, int __shmflg)
     __attribute__ ((__nothrow__ ));


extern int shmdt (const void *__shmaddr) __attribute__ ((__nothrow__ ));
