#include <stdio.h>
#include <math.h>

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

double euclidian(ponto p1, ponto p2)
{
    return sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
}

// não mexer
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

    int res1 = manhattan(p1, p2);
    printf("\n\nDistância Manhattan entre (%d, %d) e (%d, %d) = %d\n\n", p1.x, p1.y, p2.x, p2.y, res1);

    double res2 = euclidian(p1, p2);
    printf("\nDistância Euclidiana entre (%d, %d) e (%d, %d) = %.3lf\n\n", p1.x, p1.y, p2.x, p2.y, res2);

    return 0;
}
