#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float valor  = 6.2;
    int teto = ceil(valor);
    int piso = floor(valor);
    printf("Teto %d\n", teto);
    printf("Piso %d\n", piso);    
}