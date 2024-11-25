#include <stdio.h>
#include <stdlib.h>

float somar(float valores [], int tamanho){
    float soma = 0;
    for(int i=0; i<tamanho; i = i+1){
        soma = soma + valores[i];
    }
    return soma;
}

int main(){
    float valores [] ={78.8,40.5,20.7,-10.7,89,34.5,-10,34.5,35.8};
    float soma = somar(valores, 9);
    printf("Soma = %.2f\n", soma);
}

