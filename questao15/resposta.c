# include <stdlib.h>

int check(const void *a, const void *b){ 
  return (*(int*)a - *(int *)b);
}

int main(){
  int i, vetor[] = {43, 2, 94, 22, 12, 11, 90, 29, 33, 77, 99999, -154};

  qsort(vetor, 12, sizeof(int), check);
  for(i=0;i<12;i++){
    printf("%d ", *(vetor+i));
  }

  return 0;
}
