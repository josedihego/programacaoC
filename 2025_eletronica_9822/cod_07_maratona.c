#include<stdio.h>
#include<stdlib.h>

int main(){
    int di = 5000;// distância inicial
    int dm = 42195;// distância maratona
    int f = 200;// distância de incremento
    int d;
    for(d = 0; di < dm; d = d+1){
        di = di + f;
    }
    printf("Depois de %d dias o corredor corre uma maratona\n",d);
    printf("No dia %d ele percorre %d m 🏃 \n",d+1,di);

}