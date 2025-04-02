#include <stdio.h>
#include <math.h>

#define PI 3.14

int main(){
    float c1, c2, h;
    printf("Informe o cateto 1: ");
    scanf("%f",&c1);
    printf("Informe o cateto 2: ");
    scanf("%f",&c2);
    h = sqrt((c1*c1)+(c2*c2));
    printf("Hipotenusa: %.2f\n",h);

}