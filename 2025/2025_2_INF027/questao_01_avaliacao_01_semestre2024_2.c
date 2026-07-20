#include <stdio.h>
#include <stdlib.h>

int main(){
    float r;
    printf("informe o valor do raio: ");
    scanf("%f",&r);
    float area_quadrado = (r+r) * (r+r);
    float area_circulo = 3.14 * (r*r);
    float area_sombreada = area_quadrado - area_circulo;
    printf("Área sombreada é %.2f\n",area_sombreada);

}