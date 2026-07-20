#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k, x1, y1, x2, y2;
    printf("Informe o valor de k:");
    scanf("%d", &k);
    x1 = k;
    y1 = k;
    x2 = -k;
    y2 = k;
    printf("Informe as coordenadas da bola:\n");
    printf("\t x=");
    int xb, yb;
    scanf("%d", &xb);
    printf("\t y=");
    scanf("%d", &yb);
    // testar se bola foi dentro
    if (xb >= 0)
    {
        if (xb <= x1 && yb <= y1 && yb >= 0)
        {
            printf("Bola dentro (direita)\n");
        }
        else
        {
            printf("Bola fora\n");
        }
    }
    else{
        if(xb >= x2 && yb <= y2 && yb>=0){
            printf("Bola dentro (esquerda)\n");
        }
        else{
            printf("Bola fora\n");
        }
    }
}