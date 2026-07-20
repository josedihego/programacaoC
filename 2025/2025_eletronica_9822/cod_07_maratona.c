#include<stdio.h>
#include<stdlib.h>

int main(){
    int di = 5000;// distância inicial
    int dm = 42195;// distância maratona
    int f = 200;// distância de incremento
    int d;
    int distancia_total = 0;
    for(d = 0; di < dm; d = d+1){
        distancia_total = distancia_total+ di;
        di = di + f;
        printf("%d\n",di);
    }
    distancia_total = distancia_total+ di;
    printf("Depois de %d dias o corredor corre uma maratona\n",d);
    printf("No dia %d ele percorre %d m 🏃 \n",d+1,di);
    printf("Distância percorrida depois de %d dias é: %.2f km\n",d, distancia_total/1000.0);

}