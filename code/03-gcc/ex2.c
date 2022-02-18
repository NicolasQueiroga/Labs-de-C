#include <stdio.h>

void ex2(int n1, int n2)
{
    if (n1 % n2 == 0)
        printf("n1 é múltiplo de n2!\n");
    else
        printf("n1 NÃO é múltiplo de n2!\n");
}

int main(int argc, char **argv)
{
    int n1;
    int n2;

    while (1)
    {
        scanf("%d", &n1);
        scanf("%d", &n2);
        if (n1 == 0 && n2 == 0)
            break;
        if (n2 == 0)
            printf("ERROR\n");
        else
            ex2(n1, n2);
    }

    printf("O programa encerrou!\n");

    return 0;
}