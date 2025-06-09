#include <stdio.h>
#include <stdlib.h>


int main(){
    int distancia = 5000;
    int distancia_inicial = distancia;
    int incremento = 200;
    int n_dias = 0;
    while(distancia < 42195){
        distancia = distancia + incremento;
        n_dias = n_dias + 1;
    }
    printf("Começando com %d m e incementando %d m por dia, ela correrá uma maratona em %d dias\n",distancia_inicial, incremento, n_dias);
}