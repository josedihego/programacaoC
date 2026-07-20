#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    float x1,y1,h1,c1;
    float x2,y2,h2,c2;
    printf("Informe os dados do primeiro retângulo:\n");
    printf("Posição X: ");
    scanf("%f", &x1);
    printf("Posição Y: ");
    scanf("%f", &y1);
    printf("Altura: ");
    scanf("%f", &h1);
    printf("Comprimento: ");
    scanf("%f", &c1);

    printf("\nInforme os dados do segundo retângulo:\n");
    printf("Posição X: ");
    scanf("%f", &x2);
    printf("Posição Y: ");
    scanf("%f", &y2);
    printf("Altura: ");
    scanf("%f", &h2);
    printf("Comprimento: ");
    scanf("%f", &c2);

    bool x_intersecta = x1 + c1 >x2 || x1+c1 < x2+c2 || x1 < x2+c2;

    bool y_intersecta = y1-h1 < y2 || y1-h1 < y2;

    return EXIT_SUCCESS;
}