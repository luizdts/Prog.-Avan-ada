# include<stdlib.h>
int main(void){
    
  int valor;
  int *p1;
  float temp;
  float *p2;
  char aux;
  char *nome = "Ponteiros";
  char *p3;
  int idade;
  int vetor[3];
  int *p4;
  int *p5;

  /* (a) */
  valor = 10;           // valor alterado de: 10 para 20
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor);

    /* (b) */
  temp = 26.5;          // valor alterado de 26.5 para 29.0
  p2 = &temp;
  *p2 = 29.0;
  printf("%.1f \n", temp);  

  /* (c) */
  p3 = &nome[0];       // ok, resultado P
  aux = *p3;
  printf("%c \n", aux);

  /* (d) */
  p3 = &nome[4];        // ok, resultado e
  aux = *p3;    
  printf("%c \n", aux);

  /* (e) */         
  p3 = nome;            // deveria aparecer o nome "Ponteiros"
  printf("%c \n", *p3);

  /* (f) */
  p3 = p3 +4;           // ok
  printf("%c \n", *p3);

  /* (g) */
  p3--;                 // ok
  printf("%c \n", *p3);

  /* (h) */             // ok, o resultado é 31
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("%d \n", idade);

  /* (i) */             // ok, resultado é 45
  p5 = p4 +1;
  idade = *p5;
  printf("%d \n", idade);

  /* (j) */             // ok, resultado é 27
  p4 = p5 +1;
  idade = *p4;
  printf("%d \n", idade);

  /* (l) */             // ok, resultado é 31
  p4 = p4 -2;
  idade = *p4;
  printf("%d \n", idade);

  /* (m) */             // ok, resultado é 45
  p5 = &vetor[2] - 1;
  printf("%d \n", *p5);

  /* (n) */             // ok, resultado é 27
  p5++;
  printf("%d \n", *p5);
  return(0);
}
