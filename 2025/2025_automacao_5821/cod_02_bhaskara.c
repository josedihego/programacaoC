#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float a, b, c, delta, x1, x2;
    printf("Informe o valor de a: ");
    scanf("%f", &a);
    printf("Informe o valor de b: ");
    scanf("%f", &b);
    printf("Informe o valor de c: ");
    scanf("%f", &c);

    delta = (b * b) - (4 * a * c);
    if (delta >= 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Delta = %.2f\n", delta);
        if (delta == 0)
        {
            printf("Existe apenas uma raíz:\n");
            printf("Raiz: %.2f",x1);
        }
        else
        {
            printf("Equação possui duas raízes:\n");
            printf("Raíz 1: %.2f\n", x1);
            printf("Raíz 2: %.2f\n", x2);
        }
    }
    else
    {
        printf("Não existem raízes reais\n");
    }
}