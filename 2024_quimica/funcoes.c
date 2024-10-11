#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define TAM 5

int somar_valores(int v [], int q){
    int soma = 0;
    for(int i=0; i < q; i = i +1){
        soma = soma + v[i];
    }
    return soma;
}
int calcular_media (int v[], int q){
    return somar_valores(v,q)/q;
}

int main(){
    int valores [TAM];
    for(int i = 0; i < TAM; i = i +1){
        printf("Informe o valor n° %d: ", i+1);
        scanf("%d", &valores[i]);
    }
    int soma = somar_valores(valores,TAM);
    printf("Soma dos valores é: %d\n", soma);
}