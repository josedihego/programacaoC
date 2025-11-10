#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int contar_pares(int valores [], int tam){
    int qnt = 0;
    for(int i =0; i < tam; i = i +1){
        if(valores[i]%2== 0){
            qnt = qnt +1;
        }
    }
    return qnt;
}

int main(){
    srand(time(NULL));
    int * numeros;
    printf("[");
    numeros = malloc(10 * sizeof(int));
    for(int j=0; j < 10 ; j = j+1){
        numeros[j] = rand()%100;
        printf("%d, ", numeros[j]);
    }
    printf("]\n");
    int qnt = contar_pares(numeros, 10);
    printf("Foram encontrados %d pares no array gerado!");

}