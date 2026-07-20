#include <stdio.h>
#include <stdlib.h>


int main(){
    float V  = 1000;
    float V_copia = V;
    float j = 0.15;
    int qnt_m;
    for(qnt_m=0; V < 2000; qnt_m= qnt_m+1){
        V = V * (1+j);
    }
    printf("Depois de %d meses a dívida dobra de R$ %.2f para R$ %.2f \n", qnt_m,V_copia, V);
}