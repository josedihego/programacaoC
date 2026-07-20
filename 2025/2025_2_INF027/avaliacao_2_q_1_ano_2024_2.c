#include <stdio.h>
#include <stdlib.h>


int main(){
    float mi, mf;
    int minuto = 0;
    printf("Informe a massa inicial:");
    scanf("%f",&mi);
    printf("Informe a massa final:");
    scanf("%f",&mf);

    while(mi > mf){
        mi = mi - (0.1 *mi);
        minuto = minuto +1;
    }
    printf("A massa final será de %f após %d minutos\n",mi,minuto);
}