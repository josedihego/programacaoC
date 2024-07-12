#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

int main(){
    srand(time(0));
    bool acertou =  true;
    while(acertou){
        int x = rand() % 101;
        int y = rand() % 101;
        printf("Qual o valor de %d + %d ? ", x, y);
        int resposta;
        scanf("%d",&resposta); 
        if(resposta != x+y){
            acertou = false;
        }
    }
    printf("Você errou. Jogo finalizado\n");
    
}