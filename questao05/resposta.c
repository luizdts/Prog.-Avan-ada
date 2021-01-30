int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
  printf("\ni = %d",i);
  printf("vet[%d] = %.1f",i, vet[i]);
  printf("*(f + %d) = %.1f",i, *(f+i));
  printf("&vet[%d] = %X",i, &vet[i]);
  printf("(f + %d) = %X",i, f+i);
  }
}
// Resultado obtido: 
// contador/valor/valor/endereco/endereco
// i = 0vet[0] = 1.1*(f + 0) = 1.1&vet[0] = 62FDF0(f + 0) = 62FDF0 // o salto é realizado de 4 em 4 bits, nesse primeiro contador temos a saída como F0,
// i = 1vet[1] = 2.2*(f + 1) = 2.2&vet[1] = 62FDF4(f + 1) = 62FDF4 // no segundo salto é adicionado 4 bits no endereço de memória.
// i = 2vet[2] = 3.3*(f + 2) = 3.3&vet[2] = 62FDF8(f + 2) = 62FDF8 // o mesmo princípio é observado nos próximos incrementos de i.
// i = 3vet[3] = 4.4*(f + 3) = 4.4&vet[3] = 62FDFC(f + 3) = 62FDFC
// i = 4vet[4] = 5.5*(f + 4) = 5.5&vet[4] = 62FE00(f + 4) = 62FE00
