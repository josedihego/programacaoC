#include <stdio.h>
#include <stdlib.h>

#define TAM 4

int main()
{
    int numero;
    printf("Informe um valor de 4 dígitos:");
    scanf("%d", &numero);
    int algarismos[TAM];
    while (numero != 6174)
    {
        algarismos[0] = numero / 1000;
        numero = numero % 1000;
        algarismos[1] = numero / 100;
        numero = numero % 100;
        algarismos[2] = numero / 10;
        algarismos[3] = numero % 10;

        // printf("Algarismos %d%d%d%d\n",algarismos[0],algarismos[1],algarismos[2],algarismos[3]);

        for (int j = 1; j < TAM; j = j + 1)
        {
            int chave = algarismos[j];
            int i = j - 1;
            while (i >= 0 && chave < algarismos[i])
            {
                algarismos[i + 1] = algarismos[i];
                i = i - 1;
            }
            algarismos[i + 1] = chave;
        }
        // printf("Algarismos ordenados %d%d%d%d\n",algarismos[0],algarismos[1],algarismos[2],algarismos[3]);
    }
}