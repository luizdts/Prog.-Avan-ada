
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

void GC() {
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

    clock_t tfinal, tinicial;

    int tempo = 100000000;
    tinicial = clock();
    for(int i = 0; i < tempo; i++) {
        SomaMalloc();
    }
    tfinal = clock();

    printf("%d malloc: %fs\n", tempo, (double)(tfinal - tinicial) / CLOCKS_PER_SEC);

    tinicial = clock();
    for(int i = 0; i < tempo; i++) {
        GC();
    }
    tfinal = clock();

    printf("%d Malloc do GC: %fs\n", tempo, (double)(tfinal - tinicial) / CLOCKS_PER_SEC);

    return 0;
}
