// O código para exibir os incrementos dos respectivos valores de x:

# include<stdlib.h>
int main(){
  char v1[4];
  int v2[4];
  float v3[4];
  double v4[4];

  for (int i=0;i<3;i++){
    printf("%d ", v1+i);
    printf("%d ", v2+i);
    printf("%d ", v3+i);
    printf("%d\n", v4+i);
  }
}
