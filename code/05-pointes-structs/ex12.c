#include <stdio.h>

typedef struct
{
    int x;
    int y;
} ponto;

int modulo(int n)
{
    if (n < 0)
        return -n;
    return n;
}

int manhattan(ponto p1, ponto p2)
{
    int d1 = p2.x - p1.x;
    int d2 = p2.y - p1.y;

    return modulo(d1) + modulo(d2);
}

int main()
{

    ponto p1, p2;
    printf("\nDigite as coordenadas do primeiro ponto: \n");
    printf("x -> ");
    scanf("%d", &p1.x);
    printf("y -> ");
    scanf("%d", &p1.y);

    printf("Digite as coordenadas do segundo ponto: \n");
    printf("x -> ");
    scanf("%d", &p2.x);
    printf("y -> ");
    scanf("%d", &p2.y);

    int res = manhattan(p1, p2);
    printf("\n\nDistância Manhattan entre (%d, %d) e (%d, %d) = %d\n\n", p1.x, p1.y, p2.x, p2.y, res);

    return 0;
}
