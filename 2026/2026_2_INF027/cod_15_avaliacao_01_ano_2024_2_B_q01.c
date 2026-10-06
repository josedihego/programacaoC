#include <stdio.h>
#include <stdlib.h>

int main(){
    float r;
    float area_circulo;
    float area_quadrado;
    printf("Informe o valor de r: ");
    scanf("%f",&r);
    area_circulo = 3.14 * r * r;
    area_quadrado = (2 * r) * (2 * r);
    float sombra = area_quadrado - area_circulo;
    printf("Área sombreada é de %.2f\n", sombra);
}