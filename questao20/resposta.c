
#include <gc.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compara(const void * a, const void * b) {
    return ((int)a - (int)b);
}

void SomaMalloc() {
    int n = 1000;
    int *p;
    p= (int*)malloc(n * sizeof(int));

    srand(time(NULL));
    for(int j = 0; j < n; j++) {
        *(p+ j) = rand() % 100;
    }

    qsort(p, n, sizeof(int), compare);

    free(p);

}

void MallocGC() {
    int n = 1000;
    int *p;
    ptr = (int*)GC_malloc(n * sizeof(int));

    srand(time(NULL));
    for(int j = 0; j < n; j++) {
        *(p + j) = rand() % 100;
    }

    qsort(arr, n, sizeof(int), compare);

}

int main() {

    clock_t start_t, end_t;
