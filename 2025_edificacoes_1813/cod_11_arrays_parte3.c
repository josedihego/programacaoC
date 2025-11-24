#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define T 10

void imprimir_lista(int valores[], int tam){
    printf("[");
    for(int i = 0; i < tam; i = i +1){
        printf("%d, ",valores[i]);
    }
    printf("]");
}
bool contido_lista(int valores [], int tam, int buscado){
    bool achei = false;
    int p = 0;
    while(!achei && p < tam){
        if(buscado == valores[p]){
            achei = true;
        }
        p = p +1;
    }
    return achei;
}
// crie uma função chamada filtro, essa função
// filtra e imprime apenas os números pares entre 20 e 40

int main(){
    srand(time(NULL));
    int lista [T];
    for(int i = 0 ; i < T; i = i+1){
        lista[i] = rand()%100;
    }
    imprimir_lista(lista, T);
    int buscado = 35;
    bool tem = contido_lista(lista, T, buscado);
    if(tem){
        printf("O número %d esta na lista\n", buscado);
    }
    else{
        printf("O número %d NÃO esta na lista\n", buscado);
    }
}