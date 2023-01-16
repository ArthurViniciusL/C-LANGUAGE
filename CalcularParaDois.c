#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero_1 = 0;
    int numero_2 = 0;

    printf("Infome o N1: ");
    scanf("%d", &numero_1);

    printf("Infome o N2: ");
    scanf("%d", &numero_2);

    //Operações
    double soma = numero_1 + numero_2;
    double produto = numero_1 + (pow(numero_2,2));
    double potenciaN1 = numero_1 * numero_1;
    int potenciaN2 = numero_2 * numero_2;
    double raizQ = pow(potenciaN1 + (numero_2 * numero_2),0.5);
    //double senoDiferenca = ;
    int moduloN1 = ~numero_1 +1;
    //printf("%d", moduloN1);

    return 0;
}
