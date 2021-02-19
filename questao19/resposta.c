// exemplo prático
#include <stdlib.h>
#include <assert.h>

#include <gc/gc.h> // exportamos a biblioteca libGC

int main(){

    GC_INIT(); // inicializamos a biblioteca do libGC

    for (int i = 0; i < 10000; ++i)
    {
         int *p1 = (int *) GC_MALLOC(sizeof(int *)); // nota-se que não precisamos mais executar a linha de código referente ao malloc,
// o libGC já faz isso internamente com essa função.
         int *q1 = (int *) GC_MALLOC_ATOMIC(sizeof(int));
         assert(*p1 == 0);
         *p1 = (int *) GC_REALLOC(q1, 2 * sizeof(int));
         if (i % 100000 == 0)
           printf("Memória utilizada = %z ", GC_get_heap_size());
    }

  return 0;
}
