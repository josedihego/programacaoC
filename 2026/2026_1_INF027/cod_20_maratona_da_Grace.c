#include <stdio.h>
#include <stdlib.h>

#define MARATONA 42195 // 42.195 KM
#define DIS_INICIAL 5000 // 5 KM a distância inicial
#define TAXA_CRESCIMENTO 0.20 // 20% a taxa de crescimento do descanso
#define ADICIONAL_METRO 2000 // adicional por corrida/treino/sessão
#define DESCANSO_INICIAL 5 // intervalo incial de descanso


int calcular_arredondamento(int n, float a){
    int res;
    float n_f = n * (1+a);
    if(n_f - ((int)n_f) > 0){
        res = n_f+1;
    }
    else{
        res = n_f;
    }
    return res;
}

int main(){

    int numero_dias = 1; // 1° dias
    int distancia_total = DIS_INICIAL; // distância foi de 5000
    int intervalo = DESCANSO_INICIAL; // intervalo descanso de 5 dias
    while(distancia_total < MARATONA){
        distancia_total = distancia_total+ ADICIONAL_METRO; // 7000
        numero_dias = numero_dias + intervalo;// 1 + 5 = 6
        //intervalo = intervalo  * (1+TAXA_CRESCIMENTO);// 6 DIAS
        // TROCAR a linha de cima por
        intervalo = calcular_arredondamento(intervalo,TAXA_CRESCIMENTO);
    }
    printf("Grace consegue correr %d no dia %d\n", distancia_total,numero_dias);
}