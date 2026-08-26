#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1415

float calc_perimetro(float raio){
    float perimetro = 2 * PI * raio;
    return perimetro;
}

// calcular a área de uma circunferência : PI * r²
float calc_area(float raio){
    float area = PI * raio * raio;
    return area;
}

// calcular o volume de uma esfera: 4/3 * PI * r³
float calc_volume(float raio){
    float volume = (4.0/3) * PI * raio * raio * raio;
    return volume;
}



int main(){
    float r;
    printf("Informe o raio:");
    scanf("%f",&r);
    float p = calc_perimetro(r);
    printf("Perimetro da circunferência de raio %.2f é %.2f\n",r,p);
    float a = calc_area(r);
    printf("Aréa da circunferência de raio %.2f é %.2f\n",r,a);
    float v = calc_volume(r);
    printf("Volume da esfera de raio %.2f é %.2f\n",r,v);

}