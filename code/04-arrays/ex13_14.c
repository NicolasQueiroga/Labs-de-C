#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void avg_std(const double *vec, int len, double *mean, double *std)
{
    double sum = 0.0;
    for (int i = 0; i < len; i++)
        sum += vec[i];

    *mean = (double)sum / len;

    double num = 0;
    for (int j = 0; j < len; j++)
        num += pow((vec[j] - *mean), 2);

    *std = (double)num / (len - 1);
}

void describe()
{
    int n;
    printf("\nInsira o número de elementos do vetor -> ");
    scanf("%d", &n);
    double *vec = (double *)malloc(n * sizeof(double));
    if (vec != NULL)
    {
        printf("Insira os valores fracionários:\n");
        for (int i = 0; i < n; i++)
        {
            printf("-> ");
            scanf("%lf", &vec[i]);
        }
        double mean;
        double std;
        avg_std(vec, n, &mean, &std);
        printf("\n---> A média dos valores é %.3lf\n---> A variância é %.3lf\n\n", mean, std);
    }
}

int main(int argc, char **argv)
{
    describe();
    return 0;
}