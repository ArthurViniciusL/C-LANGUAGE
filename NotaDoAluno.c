#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int nota_1 = 0;
    int nota_2 = 0;
    float media = 0.0;

    printf("Informe a nota 01: ");
    scanf("%d", &nota_1);

    printf("Informe a nota 02: ");
    scanf("%d", &nota_2);

    media = (nota_1 + nota_2)/20;
    //printf("Media: %.2f", media);

    if (media >= 70)
    {
        printf("Aluno aprovado!");
    }

    else if (media >= 40 && media <= 69)
    {
        int notaExameFinal = 0;
        float notaFinal = 0.0;

        printf("O aluno vai para o exame final.");

        printf("\nInforme a nota do exame final: ");
        scanf("%d", &notaExameFinal);

        notaFinal = media + notaExameFinal;

        if (notaFinal >= 100)
        {
            printf("Aluno aprovado!");
        }

        else
        {
            printf("Aluno reprovado :(");
        }
    }

    else if (media < 40)
    {
        printf("Aluno reprovado :(");
    }

    return 0;
}
