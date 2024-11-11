#include <stdio.h>
#include <stdlib.h>

int main(){
    int qnt = 0;
    int valor;
    while(qnt < 2){
        printf("Informe um valor: ");
        scanf("%d", &valor);
        if(valor%2==0) qnt = qnt+1;
        else qnt =0;
    }
    printf("Foram digitados dois pares seguidos :) \n");
}