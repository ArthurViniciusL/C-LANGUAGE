#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora = 0;
    printf("Informe a hora: ");
    scanf("%d", &hora);

    if (hora >= 0 && hora < 12)
    {
        printf("Bom dia");
    }

    else if (hora >= 12 && hora < 18) 
    {
        printf("Boa tarde");
    }

    else if (hora >= 18 && hora <= 23)
    {
        printf("Boa noite");
    }

    else
    {
        printf("Horario invalido;");
    }

    return 0;
}
