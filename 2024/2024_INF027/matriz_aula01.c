#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int matriz[6][8];
    for (int l = 0; l < 6; l = l + 1)
    {
        for (int c = 0; c < 8; c = c + 1)
        {
            // printf("Informe o valor da linha %d e coluna %d: ",l,c);
            // scanf("%d", matriz[l][c]);
            //  ao invés de ler, vamos colocar um número aleatório
            matriz[l][c] = rand() % 30;
        }
    }

    for (int l = 0; l < 6; l = l + 1)
    {
        for (int c = 0; c < 8; c = c + 1)
        {
            if (matriz[l][c] < 10)
            {
                printf("0%d ", matriz[l][c]);
            }
            else
            {
                printf("%2d ", matriz[l][c]);
            }
        }
        printf("\n");
    }
}