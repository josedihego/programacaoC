#include<stdio.h>
#include<stdlib.h>

int main(){
    int pontos[100];
    for(int p=0; p < 100; p = p+1){
        int ponto;
        printf("Informe a pontuação:");
        scanf("%d",&ponto);
        pontos[p] = ponto * 2;
    }
}