#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

void imprimir_array(int lista[], int qnt){
    printf("[");
    for(int p =0; p < qnt; p = p +1){
        printf("%d, ", lista[p]);
    }
    printf("]\n");
}

int main(){
    srand(time(NULL));
    int valores[TAM];
    for(int i =0; i < TAM; i = i+1){
        valores[i] = rand()%120;
    }
    imprimir_array(valores,TAM);
}