#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14

float calc_per_cir(float raio){
  float perimetro = 2 * PI * raio;
  return perimetro;
}

int main(){
    float raio;
    printf("informe o raio:");
    scanf("%f",&raio);
    float perimetro = calc_per_cir(raio);
    printf("Perímetro da circunferência de raio %.2f  é %.2f\n", raio, perimetro);



}