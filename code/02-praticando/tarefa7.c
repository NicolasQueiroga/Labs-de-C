// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa7.c"

#include <stdio.h>

// TODO implemente seu programa aqui
void arvrinha(int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        for (int count = n - i; count > 0; count--)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("/");
        printf("|");
        for (int k = 0; k < i; k++)
            printf("\\");
        printf("\n");
    }
}

int main()
{
    int n;
    printf("digite um numero -> ");
    scanf("%d", &n);
    arvrinha(n);
    return 0;
}
