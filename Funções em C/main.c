#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

int main()
{
    printf("Usando headers\n");
    int y = 5;
    int quad = quadrado(y);
    int cub = cubo(y);

    printf("%d\n", quad);
    printf("%d\n", cub);

    printf("PI : %f\n", _PI);
    return 0;
}