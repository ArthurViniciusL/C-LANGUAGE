#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM_VETOR 10

int main()
{
    char inputUser;
    int arrayInt[TAM_VETOR];

    int conversionChar = 0;
    int arraySize = 0;
    int somaArray = 0;
    int avgArray = 0;
    int i = 0;

    printf("\nDigite: [e] para encerrar\n");

    while (i < TAM_VETOR && inputUser != 'e')
    {
        printf("Insira o elemento 0%d: ", i);
        scanf("\n%s", &inputUser);

        if (inputUser != 'e')
        {
            conversionChar = atoi(&inputUser);
            arrayInt[i] = conversionChar;
            arraySize++;
        }
        i += 1;
    }
    printf("%d\n", arraySize);

    // Operação
    printf("Array gerado: ");
    for (int i = 0; i < arraySize; i++)
    {
        somaArray += arrayInt[i];
        avgArray = somaArray/arraySize;

        if (arrayInt[i] == arrayInt[arraySize-1])
        {
            printf("%d. ", arrayInt[i]);
        }
        else
        {
            printf("%d, ", arrayInt[i]);
        }
    }
    printf("\nMedia do array: %d", avgArray);

    return 0;
}
