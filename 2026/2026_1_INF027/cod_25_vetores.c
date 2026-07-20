#include<stdio.h>
#include<stdlib.h>

#define QNT 3

int main(){
    float notas[QNT];
    float soma = 0;
    // esse array terá as posições 0, 1 e 2
    // se o array tem tamanho T suas posições
    // serão 0, 1, 2,...,T-1

    for(int p=0; p < QNT; p=p+1){
        printf("Informe a nota número %d: ", p+1);
        scanf("%f",&notas[p]);
    }
    for(int pos=0; pos < QNT; pos = pos+1){
        soma = soma + notas[pos];
    }
    float media = soma/QNT;
    printf("Média do discente é %.2f\n",media);

}