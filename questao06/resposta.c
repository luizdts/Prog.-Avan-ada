# include<stdlib.h>
int main(void){
  int vetor[5] = {1, 2, 3, 4, 5};
  printf("endereco do terceiro elemento: %d\n", &vetor+2); // captura do endereço de memória do terceiro elemento do vetor.
  printf("valor do terceiro elemento: %d", vetor+2); // captura do valor do terceiro elemento do vetor. Assim a resposta é "pulo+2".
}
// resultado: 
// endereco do terceiro elemento: 6487592
// valor do terceiro elemento: 6487560

// para observar o valor inteiro do elemento 3 é só utilizarmos: 
// printf("valor do terceiro elemento: %d", *vetor+2); // assim ele imprimirá o valor inteiro 3
