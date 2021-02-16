# include <stdlib.h>

int check(const void *a, const void *b){ // implementação de uma função para comparar os valores recebidos pelo vetor.
  return (*(int*)a - *(int *)b); // função interna de qsort.
}

int main(){
  int i, vetor[] = {43, 2, 94, 22, 12, 11, 90, 29, 33, 77, 99999, -154}; // vetor declarado com vários valores aleatórios.

  qsort(vetor, 12, sizeof(int), check); // aplicação do qsort no vetor.
  for(i=0;i<12;i++){
    printf("%d ", *(vetor+i)); // impressão dos valores organizados numericamente.
  }

  return 0;
}
