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
    float valores [] ={56.6,67.4,12.4,-34.5,10,25,12,9,-3,30};
    float soma = somar(valores, 10);
    printf("Soma = %.2f\n", soma);
}

