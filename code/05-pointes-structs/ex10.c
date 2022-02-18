#include <stdio.h>

void peri_area(int h, int l, int *peri, int *area)
{
    *peri = 2 * (h + l);
    *area = h * l;
}

int main(int argc, char **argv)
{
    int h, l, peri, area;
    printf("Digite dois números:\nh -> ");
    scanf("%d", &h);
    printf("l -> ");
    scanf("%d", &l);

    peri_area(h, l, &peri, &area);

    printf("Retângulo de altura %d, e largura %d\n", h, l);
    printf("Perímetro -> %d\nÁrea -> %d\n", peri, area);
    return 0;
}