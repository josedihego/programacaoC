#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor = 0;

    float somatorio = 0;
    int quantidade = 0;

    while (valor >= 0)
    {
        printf("%s", "Informe o valor da glicose:");
        scanf("%f", &valor);
        somatorio = somatorio + valor;
        quantidade = quantidade + 1;
    }
    printf("Média: %f", somatorio / quantidade);
}