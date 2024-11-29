#include <stdio.h>
#include <stdlib.h>

float somar(float valores [], int tamanho){
    float soma = 0;
    for(int i=0; i < tamanho; i = i+1){
        soma = soma + valores[i];
    }
    return soma;
}

float calc_media(float valores[], int tamanho){
    float media = somar(valores,tamanho)/tamanho;
    return media;
}

int main(){
    float valores [] = {78, 67.5, 92, 108, -3, 4, 9, 25,-50.8,120.4};
    float res = somar(valores,10);
    float media = calc_media(valores,10);
    printf("Soma= %.2f\n", res);
    printf("Média = %.2f\n",media);

}