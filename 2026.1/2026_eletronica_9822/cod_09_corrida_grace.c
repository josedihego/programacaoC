#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DIS_MARATONA 42195

int main(){
    float distancia_atual = 5000;
    int dias_treino = 1;
    int intervalo_base = 5;
    int distancia_incremento = 3000;
     dias_treino = dias_treino + intervalo_base;
    while(distancia_atual < DIS_MARATONA){
        distancia_atual = distancia_atual + distancia_incremento * (1+(dias_treino/100.0));
        printf("distancia atual = %.2f no dia %d\n",distancia_atual, dias_treino);
        dias_treino = dias_treino + ceil(5 * ( 1 + (2 * intervalo_base)/100.0));
        
    }
    printf("Grace vai correr a maratona no dia %d\n",dias_treino);
}