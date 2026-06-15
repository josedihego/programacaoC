#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define PEDRA 0
#define PAPEL 1
#define TESOURA 2


void imprimir_jogada(int jogada){
    if(jogada==PEDRA){
        printf("🪨");
    }
    else if(jogada==PAPEL){
        printf("🧻");
    }
    else{
        printf("✂️");
    }
}

int main(){
    srand(time(NULL));
    //vamos sortear a jogada do computador
    int computador = rand() % 3;
    printf("Jogada gerada pelo computador é %d\n",computador);
    int jogador;
    printf("Informe sua jogada: 0: 🪨 1: 🧻 2: ✂️ >");
    scanf("%d", &jogador);

}