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

// não mexer
int main()
{

    ponto p1, p2;
    p1.x = 0;
    p1.y = 2;
    p2.x = 1;
    p2.y = 3;

    int res = manhattan(p1, p2);
    printf("\nDistância Manhattan entre (%d, %d) e (%d, %d) = %d\n\n", p1.x, p1.y, p2.x, p2.y, res);

    return 0;
}
