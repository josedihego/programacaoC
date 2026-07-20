#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
#include<stdbool.h>


int main(){
    srand(time(0));
    bool acertou = true;
    while(acertou){
        int x = rand() % 201;
        int y = rand() % 201;
        int resposta;
        printf("Qual o valor de %d+%d?\n",x,y);
        scanf("%d",&resposta);
        if(x+y != resposta) acertou = false;
    }
}