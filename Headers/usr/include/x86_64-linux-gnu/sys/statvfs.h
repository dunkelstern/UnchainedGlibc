# 1 "/usr/include/x86_64-linux-gnu/sys/statvfs.h"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 312 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/statvfs.h" 2
# 22 "/usr/include/x86_64-linux-gnu/sys/statvfs.h"
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
# 23 "/usr/include/x86_64-linux-gnu/sys/statvfs.h" 2


# 1 "/usr/include/x86_64-linux-gnu/bits/statvfs.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/statvfs.h" 3 4
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
# 23 "/usr/include/x86_64-linux-gnu/bits/statvfs.h" 2 3 4






struct statvfs
  {
    unsigned long int f_bsize;
    unsigned long int f_frsize;

    __fsblkcnt_t f_blocks;
    __fsblkcnt_t f_bfree;
    __fsblkcnt_t f_bavail;
    __fsfilcnt_t f_files;
    __fsfilcnt_t f_ffree;
    __fsfilcnt_t f_favail;
# 48 "/usr/include/x86_64-linux-gnu/bits/statvfs.h" 3 4
    unsigned long int f_fsid;



    unsigned long int f_flag;
    unsigned long int f_namemax;
    int __f_spare[6];
  };


struct statvfs64
  {
    unsigned long int f_bsize;
    unsigned long int f_frsize;
    __fsblkcnt64_t f_blocks;
    __fsblkcnt64_t f_bfree;
    __fsblkcnt64_t f_bavail;
    __fsfilcnt64_t f_files;
    __fsfilcnt64_t f_ffree;
    __fsfilcnt64_t f_favail;
    unsigned long int f_fsid;



    unsigned long int f_flag;
    unsigned long int f_namemax;
    int __f_spare[6];
  };




enum
{
  ST_RDONLY = 1,

  ST_NOSUID = 2


  ,
  ST_NODEV = 4,

  ST_NOEXEC = 8,

  ST_SYNCHRONOUS = 16,

  ST_MANDLOCK = 64,

  ST_WRITE = 128,

  ST_APPEND = 256,

  ST_IMMUTABLE = 512,

  ST_NOATIME = 1024,

  ST_NODIRATIME = 2048,

  ST_RELATIME = 4096


};
# 26 "/usr/include/x86_64-linux-gnu/sys/statvfs.h" 2



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 51 "/usr/include/x86_64-linux-gnu/sys/statvfs.h"
extern int statvfs (const char *__restrict __file,
      struct statvfs *__restrict __buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
# 65 "/usr/include/x86_64-linux-gnu/sys/statvfs.h"
extern int statvfs64 (const char *__restrict __file,
        struct statvfs64 *__restrict __buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));





extern int fstatvfs (int __fildes, struct statvfs *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
# 84 "/usr/include/x86_64-linux-gnu/sys/statvfs.h"
extern int fstatvfs64 (int __fildes, struct statvfs64 *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
