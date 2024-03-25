#include<stdio.h>
#include<stdlib.h>
#include <limits.h>

#define MAX 6

int main(){

    int  soma = 0, valor, maior_valor= INT_MIN,menor_valor;
    float media;
    for(int i = 1; i <= MAX; i = i + 1){
        printf("Informe o valor %d/%d\n",i,MAX);
        scanf("%d",&valor);
        soma = soma + valor;
        if(valor > maior_valor){
            maior_valor  =  valor;
        }
    }
    printf("A soma dos %d valores é:%d\n", MAX, soma);
    media  =  soma / (MAX * 1.0);
    printf("A média dos %d valores é:%.2f\n",MAX,media);
    printf("O maior valor lido é:%d\n",maior_valor);

}