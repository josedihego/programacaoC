#include <stdio.h>
#include <stdlib.h>


int main(){
    float d = 100;
    int n = 1;
    float pa = 0.5;
    while(d < 42000){
        n = n + 1;
        d = d + (d * pa);
    }
    printf("Nossa corredora correrá uma maratona no dia %d\n",n);
    printf("Neste dia nossa corredora correu: %.2f\n",d);
}