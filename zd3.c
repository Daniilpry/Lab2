#include <stdio.h>
#include <stdlib.h>

int global_var;               // BSS 
int global_init = 42;         // Data

void grow_stack() {
    char big_array[10000];    
    printf("New stack top after big_array: %p\n", &big_array);
}

int main() {
    int local;               
    static int static_var;   
    static int static_init = 5; 
    int *heap = malloc(100); 

    printf("Stack top: %p\n", &local);
    printf("Global var: %p\n", &global_var);
    printf("Global init: %p\n", &global_init);
    printf("Static var: %p\n", &static_var);
    printf("Static init: %p\n", &static_init);
    printf("Heap: %p\n", heap);

    grow_stack();

    free(heap);
    return 0;
}

