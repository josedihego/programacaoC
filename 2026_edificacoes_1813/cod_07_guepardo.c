#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float vi;
    float vf;
    float a;
    float t;
    printf("Informe a velocidade inicial em km/h:");
    scanf("%f",&vi);
    printf("Informe a velocidade final em km/h:");
    scanf("%f",&vf);
    printf("Informe o tempo em segundos:");
    scanf("%f",&t);

    vi = (vi * 1000)/(60 * 60);
    vf = (vf * 1000)/(60 * 60);
    a = (vf - vi)/t;

    if(a < 0){
        a = a * -1;
    }
    printf("Módulo da acelaração escalar média é %.2f m/s²\n",a);
}