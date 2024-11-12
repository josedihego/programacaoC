#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcular_distancia(float x1, float y1, float x2, float y2)
{
    float d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return d;
}
int main()
{
    float x1 = 0;
    float y1 = 0;

    float x2;
    float y2;
    printf("Informe a coordenada  x do próximo ponto:");
    scanf("%f", &x2);
    printf("Informe a coordenada  y do próximo ponto:");
    scanf("%f", &y2);
    float distancia_total = 0;
    while (x2 != 0 && y2 != 0)
    {
        float d = calcular_distancia(x1, y1, x2, y2);
        printf("d= %f\n", d);
        distancia_total = distancia_total + d;
        x1 = x2;
        y1 = y2;
        printf("Informe a coordenada  x do próximo ponto:");
        scanf("%f", &x2);
        printf("Informe a coordenada  y do próximo ponto:");
        scanf("%f", &y2);
    }
    float d = calcular_distancia(x1, y1, x2, y2);
    printf("d= %f\n", d);
    distancia_total = distancia_total + d;
    printf("Fim do percurso. Distância percorrida: %.2f", distancia_total);
}