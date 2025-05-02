#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    while (1) {
        void *leak = malloc(1024 * 1024); // виділення 1 МБ щосекунди
        printf("Allocated 1MB at %p\n", leak);
        sleep(1);
    }
    return 0;
}
