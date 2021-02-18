
#include "gc.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(const void * a, const void * b) {
    return ( (int)a - (int)b );
}

void SMalloc() {
    int n = 1000;
    int *ptr;
    ptr = (int*)malloc(n * sizeof(int));

    srand(time(NULL));
    for(int j = 0; j < n; j++) {
        *(ptr + j) = rand() % 100;
    }

    qsort(ptr, n, sizeof(int), compare);

    free(ptr);

}

void GcMalloc() {
    int n = 1000;
    int *ptr;
    ptr = (int*)GC_malloc(n * sizeof(int));

    srand(time(NULL));
    for(int j = 0; j < n; j++) {
        *(ptr + j) = rand() % 100;
    }

    qsort(arr, n, sizeof(int), compare);

}

int main() {

    clock_t start_t, end_t;
