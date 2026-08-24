#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define PAPEL 0
#define TESOURA 1
#define PEDRA 2

void imprimir_jogada(int numero){
   switch(numero){
        case 0:
            printf("🧻\n");
            break;
        case 1:
            printf("✂️\n");
            break;
        case 2:
            printf("🪨\n");
   } 
}

int main(){
    srand(time(NULL));
    int jogador1 = rand()%3;
    printf("Jogaddor 1 fez ");
    imprimir_jogada(jogador1);
    int jogador2 = rand() %3;
    printf("Jogador 2 fez ");
    imprimir_jogada(jogador2);
    if(jogador1==PAPEL && jogador2==PEDRA ||              
    jogador1==TESOURA && jogador2==PAPEL || 
    jogador1==PEDRA && jogador2==TESOURA){
        printf("🏆 Jogador 1 ganhou👑\n");
    }
    else{
        if(jogador1==jogador2){
           printf("Empate 🟰\n");
        }
        else{
            printf("🏆 Jogador 2 ganhou👑\n");
        }
    }
}