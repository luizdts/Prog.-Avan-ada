// Pesquisando na internet, a biblioteca em C que realiza a medição do tempo de execução é chamada de time.h
// Para realizar a medição do tempo de execução do programa devemos trabalhar com função interna chamada de clock()
// ela é responsável por medir os tempos iniciais e finais da execução do programa,
// com isso também definimos variáveis específicas da biblioteca time.h
// as variáveis devem ser declaradas com time(NULL)


# include <stdlib.h>
# include <stdio.h>
# include <time.h>



int check(const void *a, const void *b){ 
  return (*(int*)a - *(int *)b);
}

int main(){

  clock_t tini, tfim;
  float tempo, inicio, fim;
  int i, vetor[] = {43, 2, 94, 22, 12, 11, 90, 29, 33, 77, 99999, -154};
  time_t time_ini = time(NULL);
  time_ini = clock();
 
  qsort(vetor, 12, sizeof(int), check);
  for(i=0;i<12;i++){
    printf("%d ", *(vetor+i));
  }

  time_t time_f = time(NULL);
  time_f = clock();
  tempo = (double) difftime(time_f, time_ini); 
  printf("\n%.5f", time_f);
  printf("\n%.5f", tempo);
  return 0;

  clock_t clock(void);
}
