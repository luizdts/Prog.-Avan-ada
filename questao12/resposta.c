/// O ponteiro para uma função representa uma variável que é capaz de armazenar um endereço de memória ou
/// um endereço de memória de uma outra variável.

/// um exemplo de programa que podemos utilizar com ponteiros


# include<stdlib.h>

int soma(int x,int y){
   return (x + y);
}

int main(){
  int (*p)(), n, x, y;
  scanf("%d", &x);
  scanf("%d", &y);
  p = soma; // o ponteiro recebe a função soma
  n = p(x,y); // n recebe os valores de p
  printf("%d\n",n); // saída do valor de p
  return 0;
}
