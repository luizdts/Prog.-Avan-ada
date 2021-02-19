# include <stdlib.h>

int check(const void *a, const void *b){ // compara e retorna o valor comparado, este valor se trata de um inteiro
  return *(int*)a - *(int *)b; // função interna da função qsort
}

int main(){
  int *p, x, i, (*q)(); // variáveis a serem utilizadas 
  q = check; // q recebe a função de comparação
  scanf("%d", &x);
  p = (int *)malloc(x*sizeof(int)); // espaço reservado para a alocação dinâmica do p 
  for(i=0;i<x;i++){
    *(p+i) = x - i; // preenchendo o vetor p com os valores recebidos
  }
  qsort(p, x, sizeof(int), q); // organização dos elementos do vetor p pela função qsort
  for(i=0;i<x;i++){
    printf("%d \n", *(p+i)); // impressão dos elementos ordenados
  }


  free(p); // libera o espaço ocupado por p
  return 0;
}
