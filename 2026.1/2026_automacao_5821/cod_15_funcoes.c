#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1415

float calc_perimetro(float raio){
    float perimetro = 2 * PI * raio;
    return perimetro;
}

// calcular a área de uma circunferência : PI * r²

// calcular o volume de uma esfera: 4/3 * PI * r³

int main(){
    float r;
    printf("Informe o raio:");
    scanf("%f",&r);
    float p = calc_perimetro(r);
    printf("Perimetro da circunferência de raio %.2f é %.2f\n",r,p);

}