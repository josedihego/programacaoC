#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define FACES 100
int jogar_dado(){
    int res = (rand()%FACES)+1;
    printf("valor sorteado %d\n", res);
    return res;
}

int main(){
    bool fim_jogo = false;
    srand(time(NULL));
    int penultimo_lance = jogar_dado();
    int jogadas =1;
    while(!fim_jogo){
        jogadas = jogadas +1;
        int ultimo_lance = jogar_dado();
        if(ultimo_lance == penultimo_lance){
            fim_jogo = true;
        }
        else{
            penultimo_lance = ultimo_lance;
        }

    }
    printf("Você precisou de %d jogadas para ganhar\n",jogadas);
}