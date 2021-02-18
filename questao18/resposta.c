#include <stdio.h>

void enterData(int PrimeiraMatriz[][10], int SegundaMatriz[][10], int PrimeiraLinha, int PrimeiraColuna, int SegundaLinha, int SegundaColuna);
void MultiplicarMatriz(int PrimeiraMatriz[][10], int SegundaMatriz[][10], int multResult[][10], int PrimeiraLinha, int PrimeiraColuna, int SegundaLinha, int SegundaColuna);
void display(int mult[][10], int PrimeiraLinha, int SegundaColuna);

int main()
{
	int PrimeiraMatriz[10][10], SegundaMatriz[10][10], mult[10][10], PrimeiraLinha, PrimeiraColuna, SegundaLinha, SegundaColuna, i, j, k;

	printf("PRIMEIRA MATRIZ   \n");
	printf("Numero de linhas: ");
	scanf("%d", &PrimeiraLinha);
	printf("Numero de colunas: ");
	scanf("%d", &PrimeiraColuna);

    printf("\nSEGUNDA MATRIZ   \n");
	printf("Numero de linhas: ");
	scanf("%d", &SegundaLinha);
    printf("Numero de colunas: ");
	scanf("%d", &SegundaColuna);

	// Garante que existe a multiplicidade entre as matrizes
	while (PrimeiraColuna != SegundaLinha)
	{
		printf("Erro! Verifique se a multiplicaçao eh possivel.\n");
		printf("Entre com a linha e a coluna da primeira matriz: ");
		scanf("%d%d", &PrimeiraLinha, &PrimeiraColuna);
		printf("Entre com a linha e a coluna da segunda matriz: ");
		scanf("%d%d", &SegundaLinha, &SegundaColuna);
	}

        // Matriz Data
        enterData(PrimeiraMatriz, SegundaMatriz, PrimeiraLinha, PrimeiraColuna, SegundaLinha, SegundaColuna);

        // Multipliciar duas matrizes
        MultiplicarMatriz(PrimeiraMatriz, SegundaMatriz, mult, PrimeiraLinha, PrimeiraColuna, SegundaLinha, SegundaColuna);

        // Função exibir matriz
        display(mult, PrimeiraLinha, SegundaColuna);

	return 0;
}

void enterData(int PrimeiraMatriz[][10], int SegundaMatriz[][10], int PrimeiraLinha, int PrimeiraColuna, int SegundaLinha, int SegundaColuna)
{
	int i, j;
	printf("\nEntre com os elementos da Matriz 1:\n");
	for(i = 0; i < PrimeiraLinha; ++i)
	{
		for(j = 0; j < PrimeiraColuna; ++j)
		{
			printf("Entre com o elemento a%d%d: ", i + 1, j + 1);
			scanf("%d", &PrimeiraMatriz[i][j]);
		}
	}

	printf("\nEntre com os elementos da Matriz 2:\n");
	for(i = 0; i < SegundaLinha; ++i)
	{
		for(j = 0; j < SegundaColuna; ++j)
		{
			printf("Entre com o elemento b%d%d: ", i + 1, j + 1);
			scanf("%d", &SegundaMatriz[i][j]);
		}
	}
}

void MultiplicarMatriz(int PrimeiraMatriz[][10], int SegundaMatriz[][10], int mult[][10], int PrimeiraLinha, int PrimeiraColuna, int SegundaLinha, int SegundaColuna)
{
	int i, j, k;

	// Iniciando os elementos da Matriz resultante em zero.
	for(i = 0; i < PrimeiraLinha; ++i)
	{
		for(j = 0; j < SegundaColuna; ++j)
		{
			mult[i][j] = 0;
		}
	}

	// Multiplicação entre PrimeiraMatriz e SegundaMatriz
	for(i = 0; i < PrimeiraLinha; ++i)
	{
		for(j = 0; j < SegundaColuna; ++j)
		{
			for(k=0; k<PrimeiraColuna; ++k)
			{
				mult[i][j] += PrimeiraMatriz[i][k] * SegundaMatriz[k][j];
			}
		}
	}
}

void display(int mult[][10], int PrimeiraLinha, int SegundaColuna)
{
	int i, j;
	printf("\Matriz resultante:\n");
	for(i = 0; i < PrimeiraLinha; ++i)
	{
		for(j = 0; j < SegundaColuna; ++j)
		{
			printf("%d  ", mult[i][j]);
			if(j == SegundaColuna - 1)
				printf("\n\n");
		}
	}
}
