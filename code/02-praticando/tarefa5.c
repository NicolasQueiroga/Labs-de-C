// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa5.c"

#include <stdio.h>
#include <math.h>

// TODO: declare função manhattan aqui. Veja abaixo como ela será usada

int modulo(int n)
{
    if (n < 0)
        return -n;
    return n;
}

int manhattan(int a1, int b1, int a2, int b2)
{
    int p1 = a2 - a1;
    int p2 = b2 - b1;

    return modulo(p1) + modulo(p2);
}

// não mexer
int main()
{

    // assertEquals é uma função do mutirão que confere
    // se o segundo argumento é igual ao terceiro.
    // Neste caso, se ele checa a chamada de manhattan retorna o valor esperado.
    assertEquals("manhattan(0, 1, 2, 3) != 4", manhattan(0, 1, 2, 3), 4);
    assertEquals("manhattan(0, 1, 0, 2) != 1", manhattan(0, 1, 0, 2), 1);
    assertEquals("manhattan(1, 0, 2, 0) != 1", manhattan(1, 0, 2, 0), 1);
    assertEquals("manhattan(1, 2, 1, 2) != 0", manhattan(1, 2, 1, 2), 0);

    assertEquals("manhattan(0, -1, 0, 2) != 3", manhattan(0, -1, 0, 2), 3);
    assertEquals("manhattan(-1, 0, 2, 0) != 3", manhattan(-1, 0, 2, 0), 3);

    printSummary

        return 0;
}
