// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa6.c"

#include <stdio.h>

// TODO implemente seu programa aqui

void tarefa06(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d -> ", i);
        if (i % 3 == 0 && i % 5 == 0)
            printf("por três e por cinco\n");
        else if (i % 3 == 0 && i % 5 != 0)
            printf("apenas por três\n");
        else if (i % 3 != 0 && i % 5 == 0)
            printf("apenas por cinco\n");
        else
            printf("nenhum\n");
    }
}

int main()
{
    tarefa06(10);
    return 0;
}
