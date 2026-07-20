#include <stdio.h>
#include <stdlib.h>

#define N 50

int main()
{
    int matriz[N][N];
    int matriz_90[N][N];

    //vamos testar
    /**
    int matriz[N][N] = {
        {52, 55, 61, 59, 57, 60},
        {49, 56, 60, 58, 55, 59},
        {48, 53, 58, 57, 54, 57},
        {46, 51, 56, 55, 53, 56},
        {44, 49, 54, 53, 50, 54},
        {43, 47, 51, 50, 48, 52}
    };
     */

    for (int l = 0; l < N; l = l + 1)
    {
        for (int c = 0; c < N; c = c + 1)
        {
            // apenas comentar para testes
            printf("Informe o elemento [%d][%d]:", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }
    // rotaciona 90°
    for (int l = 0; l < N; l = l + 1)
    {
        for (int c = 0; c < N; c = c + 1)
        {
            matriz_90[c][N - l - 1] = matriz[l][c];
        }
    }

    for (int l = 0; l < N; l = l + 1)
    {
        for (int c = 0; c < N; c = c + 1)
        {
            printf("%d ", matriz_90[l][c]);
        }
        printf("\n");
    }
}