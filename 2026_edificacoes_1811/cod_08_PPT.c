#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define PAPEL 0
#define TESOURA 1
#define PEDRA 2

int main()
{
    // printf("tempo %li \n", time(NULL));
    srand(time(NULL));
    int robo = rand() % 3;
    // printf("Jogada robô: %d\n", robo);
    printf("Informe sua jogada: (0 .🧻) (1. ✂️) (2. 🪨): ");
    int jogador;
    scanf("%d", &jogador);
    printf("As jogadas foram: \n");
    printf("Você jogou: ");
    if (jogador == PAPEL)
    {
        printf("🧻\n");
    }
    else if (jogador == TESOURA)
    {
        printf("✂️\n");
    }
    else
    {
        printf("🪨\n");
    }
    printf("Robô jogou: ");
    if (robo == PAPEL)
    {
        printf("🧻\n");
    }
    else if(robo == TESOURA)
    {
        printf("✂️\n");
    }
    else{
        printf("🪨\n");
    }
}