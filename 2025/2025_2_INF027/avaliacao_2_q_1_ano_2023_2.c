#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main()
{
    int valores[TAM];
    int v;
    int pxl = 0;
    printf("Informe um valor: ");
    scanf("%d", &v);
    while (v >= 0)
    {
        if (v == 0)
        {
            pxl = pxl - 1;
        }
        else
        {
            valores[pxl] = v;
            pxl = pxl + 1;
        }
        printf("Informe um valor: ");
        scanf("%d", &v);
    }
    int soma = 0;
    for(int p =0; p < pxl; p = p +1){
        soma = soma + valores[p];
    }
    printf("Resultado = %d\n", soma);
}