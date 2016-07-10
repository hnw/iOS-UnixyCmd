#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

#define SHUTDOWN() {close(STDOUT_FILENO);close(STDERR_FILENO);}
#define exit(retval) {SHUTDOWN(); pthread_exit((void *)retval);}

int dummy_main(int argc, char *const *argv)
{
    printf("argc=%d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%d]=%s\n", i, argv[i]);
    }
    return 0;
}
