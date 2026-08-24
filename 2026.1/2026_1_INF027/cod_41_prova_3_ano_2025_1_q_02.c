#include <stdio.h>
#include <stdlib.h>

#define TAM 2

int main()
{
    int R, G, B;
    int imagem[TAM][TAM];
    for (int l = 0; l < TAM; l = l + 1)
    {
        for (int c = 0; c < TAM; c = c + 1)
        {
            printf("Informe o pixel RGB da linha %d e coluna %d:", l, c);
            scanf("%d,%d,%d", &R, &G, &B);
            int tom_cinza = 0.299 * R + 0.587 * G + 0.114 * B;
            imagem[l][c] = tom_cinza;
        }
    }
    for (int l = 0; l < TAM; l = l + 1)
    {
        for (int c = 0; c < TAM; c = c + 1)
        {
            printf("%d ", imagem[l][c]);
        }
        printf("\n");
    }
}