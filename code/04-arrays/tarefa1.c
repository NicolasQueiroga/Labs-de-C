// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab4-"
#define SOLUTIONFILE "tarefa1.c"

#include <stdio.h>

int main(int argc, char *argv[])
{

	/* TODO: conserte o código abaixo */
	long vetor[5];

	printf("Digite os numeros do array: \n");
	for (int j = 0; j < 5; j++)
	{
		printf("vetor[%d] = ", j);
		scanf("%ld", &vetor[j]);
	}
	int i;

	for (i = 0; i < 5; i++)
	{
		if (vetor[i] % 2 == 0)
			printf("Par! ");
		printf("i: %d, vetor[i]: %ld\n", i, vetor[i]);
	}

	return 0;
}
