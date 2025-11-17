#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define T 10

void imprimir_lista(int valores[], int tam){
    printf("[");
    for(int i = 0; i < tam; i = i +1){
        printf("%d, ",valores[i]);
    }
    printf("]");
}

int main(){
    srand(time(NULL));
    int lista [T];
    for(int i = 0 ; i < T; i = i+1){
        lista[i] = rand()%100;
    }
    imprimir_lista(lista, T);
}