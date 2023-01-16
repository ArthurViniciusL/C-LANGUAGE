#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main(void)
{
    int numAleatorio = 0;
    int chuteUser = 0;

    //Usando o total de segundos do sistema para gerar a semente;
    srand(time(NULL));

    // Gerando um número aleatório de 1 a 10;
    for (int i = 0; i < 1; i++)
    {
        numAleatorio = rand() % 10;
        //Garantindo que numAleatorio não seja < ou == 0;
        if (numAleatorio <= 0)
        {
            numAleatorio = rand() % 10;
        }
        //printf("%d", numAleatorio);
    }

    for (int i = 1; i <= 3; i++)
    {
        printf("Tentativa 0%d: ", i);
        scanf("%d", &chuteUser);

        if (chuteUser != numAleatorio)
        {
            if (i == 3)
            {
                printf("\nNumero de tentativas excedidas.\n");
                printf("O numero era %d\n", numAleatorio);
            }
            else if (chuteUser < numAleatorio)
            {
                printf("Um pouco mais...\n\n");
            }
            else //if (chuteUser > numAleatorio)
            {
                printf("Um pouco menos...\n\n");
            }
        }

        else //(chuteUser == numAleatorio)
        {
            printf("Acertou!\n");
            break;
        }
    }

    return 0;
}
