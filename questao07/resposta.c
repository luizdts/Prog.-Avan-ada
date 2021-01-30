# include<stdlib.h>
int main(void){
  int mat[4] = {1, 2, 3, 4};
  int *p, x;
  p = mat + 1;  // entrada válida! p recebe o valor do próximo elemento do vetor "mat".
  p = mat++; // declaração inválida
  p = ++mat; // declaração inválida
  x = (*mat)++; // declaração inválida, não realiza a soma
  printf("valor de p: %d", *p);
  return 0;
}

// resultado:
// valor de p: 2
