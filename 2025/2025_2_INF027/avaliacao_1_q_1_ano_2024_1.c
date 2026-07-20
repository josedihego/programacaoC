#include <stdio.h>
#include <stdlib.h>

int main()
{
    int distancia;
    printf("Informe a distância percorrida:");
    scanf("%d", &distancia);
    distancia = distancia - 3;
    distancia = distancia % 8;
    if (distancia == 3)
    {
        printf("Sairá no sensor 1\n");
    }
    else if (distancia == 4)
    {
        printf("Sairá no sensor 2\n");
    }
    else if (distancia == 5)
    {
        printf("Sairá no sensor 3\n");
    }
    else
    {
        printf("Particula não sai do acelerador\n");
    }
}