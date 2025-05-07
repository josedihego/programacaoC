#include <stdio.h>
#include <stdlib.h>


int main(){
    float V = 1000;
    float j = 0.12;
    int m;
    for(m = 0; V < 4000; m = m +1){
        V = V * (1 + j);
    }
    printf("A dívida dobra em %d meses\n", m);
    printf("valor da dívida %.2f\n", V);
}