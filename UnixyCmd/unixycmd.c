#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

#define SHUTDOWN() {close(STDOUT_FILENO);close(STDERR_FILENO);}
#define exit(retval) {SHUTDOWN(); pthread_exit((void *)retval);}

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
