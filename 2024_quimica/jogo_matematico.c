#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

int main(){
    srand(time(0));
    bool acertou = true;
    while(acertou){
        int n1 = rand() % 101;
        int n2 = rand() % 101;
        printf("Qual o valor de %d + %d ?", n1, n2);
        int resposta;
        scanf("%d",&resposta);
        if(resposta != n1+n2) acertou = false;
    }
}