#include <stdio.h>
#include <stdlib.h>

#define BORD_MIN 13
#define BORD_MAX 17

int main()
{
    float temp;
    printf("informe a leitura da temperatura do Arduino: ");
    scanf("%f", &temp);
    if (temp >= BORD_MIN && temp <= BORD_MAX)
    {
        printf("temperatura entre %d e %d", BORD_MIN, BORD_MAX);
    }
    else
    {
        printf("temperatura FORA do intervalo de %d e %d", BORD_MIN, BORD_MAX);
    }
}