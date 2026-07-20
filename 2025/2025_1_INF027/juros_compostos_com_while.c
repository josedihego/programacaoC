#include <stdio.h>
#include <stdlib.h>

int main(){
    float V = 1000;
    float V_dobro = 2*V;
    float j = 0.03;
    int qnt_m = 0;
    while(V < V_dobro){
        V = V * (1+j);
        qnt_m = qnt_m + 1;
    }
    printf("Depois de %.d meses a dívida dobra para %.2f\n", qnt_m, V);

}