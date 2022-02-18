#include <stdio.h>


void sum_sub(int a, int b, int *sum, int *sub)
{
    *sum = a + b;
    *sub = a - b;
}

int main(int argc, char **argv)
{
    int a, b, sum, sub;
    printf("Digite dois números:\na -> ");
    scanf("%d", &a);
    printf("b -> ");
    scanf("%d", &b);

    sum_sub(a, b, &sum, &sub);

    printf("%d + %d = %d\n%d - %d = %d\n", a, b, sum, a, b, sub);
    return 0;
}