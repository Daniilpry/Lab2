#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MSG "In function %20s; &localvar = %p\n"

void bar_is_now_closed(void) {
    int localvar = 5;
    printf(MSG, __FUNCTION__, &localvar);
    printf("Now blocking on pause()...\n");
    pause();
}

void bar(void) {
    int localvar = 5;
    printf(MSG, __FUNCTION__, &localvar);
    bar_is_now_closed();
}

void foo(void) {
    int localvar = 5;
    printf(MSG, __FUNCTION__, &localvar);
    bar();
}

int main() {
    int localvar = 5;
    printf(MSG, __FUNCTION__, &localvar);
    foo();
    return 0;
}
