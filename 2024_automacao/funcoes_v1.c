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
    
}

int main(){
    float valores [] = {78.00, 67.50, 92.00, 108.00, -3.00, 4.00, 9.00};
    float res = somar(valores,7);
    printf("Soma= %.2f\n", res);

}