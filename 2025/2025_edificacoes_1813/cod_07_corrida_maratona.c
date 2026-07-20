#include <stdio.h>
#include <stdlib.h>

int main(){
    int maratona = 42195;
    int nd;
    int distancia = 5000;
    int incremento = 200;
    int somatorio = 5000;
    for(nd=1; distancia <= maratona; nd = nd+1){
        distancia = distancia+200;
        somatorio = somatorio + distancia;

    }
    printf("🥇 Diva conseguirá correr a maratona no dia n° %d\n",nd);
    printf("📍 Nesse dia Diva terá corrido %d\n", distancia);
    printf("Diva percorreu ao longo de todo o treinamento %d metros\n", somatorio);
    printf("Ou seja %.2f km\n", somatorio/1000.0);
}