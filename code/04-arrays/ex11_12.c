#include <stdio.h>

void colSum(int mat[5][4])
{
    int largestVal = 0;
    int valLoc = 0;
    for (int i = 0; i < 4; i++)
    {
        int sum = 0;
        for (int j = 0; j < 5; j++)
            sum += mat[j][i];
        if (sum > largestVal)
        {
            largestVal = sum;
            valLoc = i;
        }
        printf("Soma da coluna %d é igual a %d\n", i + 1, sum);
    }
    printf("\nA maior soma é %d e pertence à coluna %d\n", largestVal, valLoc + 1);
}

int main(int argc, char **argv)
{
    int mat[5][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {45, 6, 10, 0},
        {9, 8, 5, 2},
        {3, 3, 3, 3}};

    colSum(mat);

    return 0;
}