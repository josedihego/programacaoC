#include<stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void imprimir_array(int valores [], int tam){
    printf("[");
    for(int i=0; i < tam; i = i +1){
        printf("%d, ", valores[i]);
    }
    printf("]\n");
}

void ordenar(int valores [], int tam){
    for(int i = 0; i < tam; i = i+1){
        for(int j = 0; j < tam; j = j+1){
            if(valores[j] < valores[i]){
                int temp = valores[i];
                valores[i] = valores[j];
                valores[j] = temp;
            }
        }
    }
}

int main(){
    srand(time(NULL));
    int valores[TAM];
    for(int i = 0; i <TAM; i = i +1){
        valores[i] = (rand() % 50) +1;
    }
    imprimir_array(valores,TAM);
    ordenar(valores,TAM);
    imprimir_array(valores,TAM);
}