# 1 "/usr/include/grp.h"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 312 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/usr/include/grp.h" 2
# 25 "/usr/include/grp.h"
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
# 26 "/usr/include/grp.h" 2



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
# 30 "/usr/include/grp.h" 2


# 1 "/usr/lib/llvm-3.6/bin/../lib/clang/3.6.2/include/stddef.h" 1 3
# 62 "/usr/lib/llvm-3.6/bin/../lib/clang/3.6.2/include/stddef.h" 3
typedef long unsigned int size_t;
# 33 "/usr/include/grp.h" 2




typedef __gid_t gid_t;




struct group
  {
    char *gr_name;
    char *gr_passwd;
    __gid_t gr_gid;
    char **gr_mem;
  };





# 1 "/usr/include/stdio.h" 1 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;
# 54 "/usr/include/grp.h" 2








extern void setgrent (void);







extern void endgrent (void);





extern struct group *getgrent (void);
# 86 "/usr/include/grp.h"
extern struct group *fgetgrent (FILE *__stream);
# 96 "/usr/include/grp.h"
extern int putgrent (const struct group *__restrict __p,
       FILE *__restrict __f);






extern struct group *getgrgid (__gid_t __gid);





extern struct group *getgrnam (const char *__name);
# 134 "/usr/include/grp.h"
extern int getgrent_r (struct group *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct group **__restrict __result);






extern int getgrgid_r (__gid_t __gid, struct group *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct group **__restrict __result);





extern int getgrnam_r (const char *__restrict __name,
         struct group *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct group **__restrict __result);
# 164 "/usr/include/grp.h"
extern int fgetgrent_r (FILE *__restrict __stream,
   struct group *__restrict __resultbuf,
   char *__restrict __buffer, size_t __buflen,
   struct group **__restrict __result);
# 176 "/usr/include/grp.h"
# 1 "/usr/lib/llvm-3.6/bin/../lib/clang/3.6.2/include/stddef.h" 1 3
# 177 "/usr/include/grp.h" 2


extern int setgroups (size_t __n, const __gid_t *__groups) __attribute__ ((__nothrow__ ));
# 189 "/usr/include/grp.h"
extern int getgrouplist (const char *__user, __gid_t __group,
    __gid_t *__groups, int *__ngroups);
# 200 "/usr/include/grp.h"
extern int initgroups (const char *__user, __gid_t __group);
