# 1 "/usr/include/search.h"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 312 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/usr/include/search.h" 2
# 22 "/usr/include/search.h"
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
# 23 "/usr/include/search.h" 2


# 1 "/usr/lib/llvm-3.6/bin/../lib/clang/3.6.2/include/stddef.h" 1 3
# 62 "/usr/lib/llvm-3.6/bin/../lib/clang/3.6.2/include/stddef.h" 3
typedef long unsigned int size_t;
# 26 "/usr/include/search.h" 2








struct qelem
  {
    struct qelem *q_forw;
    struct qelem *q_back;
    char q_data[1];
  };




extern void insque (void *__elem, void *__prev) __attribute__ ((__nothrow__ ));


extern void remque (void *__elem) __attribute__ ((__nothrow__ ));






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;




typedef enum
  {
    FIND,
    ENTER
  }
ACTION;

typedef struct entry
  {
    char *key;
    void *data;
  }
ENTRY;


struct _ENTRY;
# 87 "/usr/include/search.h"
extern ENTRY *hsearch (ENTRY __item, ACTION __action) __attribute__ ((__nothrow__ ));


extern int hcreate (size_t __nel) __attribute__ ((__nothrow__ ));


extern void hdestroy (void) __attribute__ ((__nothrow__ ));



struct hsearch_data
  {
    struct _ENTRY *table;
    unsigned int size;
    unsigned int filled;
  };



extern int hsearch_r (ENTRY __item, ACTION __action, ENTRY **__retval,
        struct hsearch_data *__htab) __attribute__ ((__nothrow__ ));
extern int hcreate_r (size_t __nel, struct hsearch_data *__htab) __attribute__ ((__nothrow__ ));
extern void hdestroy_r (struct hsearch_data *__htab) __attribute__ ((__nothrow__ ));
# 118 "/usr/include/search.h"
typedef enum
{
  preorder,
  postorder,
  endorder,
  leaf
}
VISIT;



extern void *tsearch (const void *__key, void **__rootp,
        __compar_fn_t __compar);



extern void *tfind (const void *__key, void *const *__rootp,
      __compar_fn_t __compar);


extern void *tdelete (const void *__restrict __key,
        void **__restrict __rootp,
        __compar_fn_t __compar);



typedef void (*__action_fn_t) (const void *__nodep, VISIT __value,
          int __level);




extern void twalk (const void *__root, __action_fn_t __action);




typedef void (*__free_fn_t) (void *__nodep);


extern void tdestroy (void *__root, __free_fn_t __freefct);





extern void *lfind (const void *__key, const void *__base,
      size_t *__nmemb, size_t __size, __compar_fn_t __compar);



extern void *lsearch (const void *__key, void *__base,
        size_t *__nmemb, size_t __size, __compar_fn_t __compar);
