#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float somar(float valores [], int tamanho){
    float soma = 0;
    for(int i =0; i < tamanho; i = i +1){
        soma = soma + valores[i];
    }
    return soma;
}

float mediar(float valores [], int tamanho){
    float soma = somar(valores,tamanho);
    float media = soma/tamanho;
    return media;
}

int main(){
    float valores [] = {198,-30,45.6,67.9,90.5,81,-5,43.5,82.7};
    float res = somar(valores,9);
    printf("Soma = %.2f\n", res);
    float media = mediar(valores,9);
    printf("Média= %.2f\n",media);
}