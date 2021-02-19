# include <stdlib.h>   
# include <stdio.h>

void soma(int *v1, int *v2, int *v3, int t){
  for(int i=0; i<t; i++){
    v3[i] = v1[i] + v2[i];
  }
  printf("vetor da soma = ");
    for(int i=0;i<t;i++){
        printf("%f ", v3[i]);
    }
    printf("\n");
}

int main(){
  int n=1;
  int p[n], q[n], r[n];
  int x, y;

  for(int i=0; i<n; i++){
    printf("digite o %d do vetor 1 = ", i);
    scanf("%f", &x);
    p[i] = x;
    printf("digite o %d do vetor 2 = ", i);
    scanf("%f", &y);
    q[i] = y;

  }

soma(p, q, r, n);

free(p);
free(q);
free(r);

}
