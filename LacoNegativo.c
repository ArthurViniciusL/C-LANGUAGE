#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int maior = 100;
    int menor = 1;

    while (maior >= menor)
    {
        printf("%d  ", maior);
        maior -= 1;
    }
}
