#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int calc_pares(int valores [], int tam){
    int qnt = 0;
    for(int i = 0; i < tam; i = i +1){
        if(valores[i]%2==0){
            qnt = qnt +1;
        }
    }
    return qnt;
}

void ordenar(int valores [], int tam){
    
}

int main(){
    srand(time(NULL));
    int * numeros;
    numeros = malloc(10 * sizeof(int));
    printf("[ ");
    for(int i = 0; i < 10; i = i +1){
        numeros[i] = rand() % 100;
        printf("%d, ", numeros[i]);
    }
    printf(" ]");
    int qnt = calc_pares(numeros, 10);
    printf("Destes %d são pares\n",qnt);
}