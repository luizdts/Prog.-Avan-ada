# include<stdlib.h>
int main(){
  float aloha[10], coisas[10][5], *pf, value = 2.2;
  int i=3; 
  aloha[2] = value; // válido pois aloha recebe 2.2.
  scanf("%f", &aloha); // válido, é interpretado o valor de aloha[0].
  aloha = value; // inválido pois aloha é um ponteiro.
  printf("%f", aloha); // válido, retorna a posição inicial de aloha, aloha[0].
  coisas[4][4] = aloha[3]; // válido, a matriz recebe o conteúdo de aloha[3].
  coisas[5] = aloha;       // inválido, a declaração está incorreta pois o termo se trata de uma matriz.
  pf = value;       // inválido, pf é um ponteiro, têm de se usar as declarações corretas para capturar os valores ou endereços desejados.
  pf = aloha;     // válido pois aloha é um ponteiro.
 
}
