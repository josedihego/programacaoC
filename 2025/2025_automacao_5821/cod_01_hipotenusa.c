#include <stdio.h>
#include <math.h>


int main(){
    float c1,c2,h;
    printf("Informe o valor do cateto 1: ");
    scanf("%f",&c1);
    printf("Informe o valor de cateto 2: ");
    scanf("%f",&c2);
    h = sqrt(c1*c1 + c2*c2);
    printf("Hipotenusa =  %.2f\n", h);
}