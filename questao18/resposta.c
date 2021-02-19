#include <stdio.h>

void dados(int m1 [][10], int m2[][10], int i1, int j1, int i2, int j2){
	int i, j;
	printf("valores de m1: ");
	for(i = 0; i < i1;i++){
		for(j = 0; j < j1;j++){
			printf("digite o valor de a%d%d: ", i + 1, j + 1);
			scanf("%d", &m1[i][j]);
		}
	}

	printf("valores de m2: ");
	for(i = 0; i<i2;i++){
		for(j = 0; j < j2;j++){
			printf("digite o valor de b%d%d: ", i + 1, j + 1);
			scanf("%d", &m2[i][j]);
		}
	}
}


void multmatriz(int m1[][10], int m2[][10], int resultado[][10], int i1, int j1, int i2, int j2){
	int i, j, k;
	
	// Multiplicação entre as matrizes m1 e m2
	for(i=0;i<i1;i++){
		for(j =0;j<j2;j++){
			for(k=0; k<i1; k++){
				mult[i][j] += m1[i][k] * m2[k][j];
			}
		}
	}
}


void imprime(int mult[][10], int i1, int j2){
	int i, j;
	printf("Matriz final:\n");
	for(i = 0;i<i1;i++){
		for(j=0;j<j2;j++){
			printf("%d  ", mult[i][j]);
			if(j==j2-1){
				printf("\n");
			}
		}
	}
}

int main(){
	
	int m1[10][10], m2[10][10], multmatriz[10][10], i1, j1, i2, j2, i, j, k;

	printf("linhas m1: ");
	scanf("%d", &i1);
	printf("colunas m1: ");
	scanf("%d", &j1);

	printf("linhas m2: ");
	scanf("%d", &i2);
    printf("colunas m2: ");
	scanf("%d", &j2);

	
	while (j1 != j2){
		printf("insira os valores de m1: ");
		scanf("%d%d", &i1, &j1);
		printf("insira os valores de m2: ");
		scanf("%d%d", &i2, &j2);
	}

        
       dados(m1, m2, i1, j1, i2, j2); // vamos dar entrada nos dados, realizar as operações e exibir a matriz
       multmatriz(m1, m2, mult, i1, j1, i2, j2);
       imprime(mult, i1, j2);

	return 0;
}

