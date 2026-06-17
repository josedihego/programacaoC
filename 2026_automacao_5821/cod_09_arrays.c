#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main(){
    int valores[TAM];

    for(int j = 0; j < TAM; j = j+1){
        printf("Informe o valor n° %d:", j+1);
        scanf("%d",&valores[j]);
    }
    // imprimir o array

    printf("Valores informados [");
    for(int k=0; k < TAM; k = k+1){
        printf("%d, ",valores[k]);
    }
    printf("]\n");

}