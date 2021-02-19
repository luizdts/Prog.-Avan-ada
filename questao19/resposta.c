// exemplo prático

#include <assert.h>
#include <stdio.h>
#include <gc/gc.h>

int main()
{
    int i;

    GC_INIT(); // inicializamos a biblioteca do libGC

    for (i = 0; i < 10000; ++i)
    {
         int *p1 = (int *) GC_MALLOC(sizeof(int *)); // nota-se que não precisamos mais executar a linha de código referente ao malloc,
// o libGC já faz isso internamente com essa função.
         int *q1 = (int *) GC_MALLOC_ATOMIC(sizeof(int));
         assert(*p1 == 0);
         *p1 = (int *) GC_REALLOC(q1, 2 * sizeof(int));
         if (i % 100000 == 0)
           printf("Memória utilizada = %z \n", GC_get_heap_size());
    }

  return 0;
}
