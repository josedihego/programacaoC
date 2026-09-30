#include<stdio.h>
#include<stdlib.h>

int main(){
    float distancia = 5000;
    distancia = distancia + 3000 * (1+ 6.0/100.0);
    printf("distancia final é %.2f\n",distancia);
}