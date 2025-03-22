#include <stdio.h>
#include <time.h>
#include <stdint.h>

int main() {
    time_t max = (time_t)(~(time_t)0 >> 1);
    printf("Max time_t: %ld\n", (long)max);
    printf("End time_t: %s", ctime(&max));

    return 0;
}
