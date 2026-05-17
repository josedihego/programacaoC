#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PEDRA 0
#define PAPEL 1
#define TESOURA 2

int sortear(){
    int sorteado = rand()%3;
    if(sorteado==PEDRA) printf("PEDRA 🪨\n");
    if(sorteado==TESOURA) printf("TESOURA ✂️\n");
    if(sorteado==PAPEL) printf("PAPEL 🧻\n");
    return sorteado;
}

int main(){
    srand(time(NULL));
    int jogador_1 = sortear();
    int jogador_2 = sortear();

    
}