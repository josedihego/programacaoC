#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{
    srand(time(NULL));
    int linha = rand() % 3;
    int coluna = rand() % 3;
    printf("\n");
    char jogo[3][3] = {{'_', '_', '_'}, {'_', '_', '_'}, {'_', '_', '_'}};
    printf("informe sua jogada:");
    scanf(" %c", &jogo[1][1]);
    for (int l = 0; l < 3; l = l + 1)
    {
        for (int c = 0; c < 3; c = c + 1)
        {
            printf("%c ", jogo[l][c]);
            fflush(stdout);
            sleep(1);
        }
        printf("\n");
    }
    printf("\n");
}