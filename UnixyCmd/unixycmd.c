#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

static inline void exit(retval) {fflush(stdout);close(STDOUT_FILENO);fflush(stderr);close(STDERR_FILENO);pthread_exit((void *)retval);}

int unixycmd_main(int argc, char *const *argv)
{
    fprintf(stderr, "foobar\n");
    printf("argc=%d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%d]=%s\n", i, argv[i]);
    }
    fprintf(stderr, "baz\n");
    return 0;
}
