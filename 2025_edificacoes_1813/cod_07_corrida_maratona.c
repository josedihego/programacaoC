#include <stdio.h>
#include <stdlib.h>

int main(){
    int maratona = 42195;
    int nd;
    int distancia = 5000;
    int incremento = 200;

    for(nd=1; distancia <= maratona; nd = nd+1){
        distancia = distancia+200;
    }
    printf("🥇 Diva conseguirá correr a maratona no dia n° %d\n",nd);
    printf("📍 Nesse dia Diva terá corrido %d\n", distancia);
}