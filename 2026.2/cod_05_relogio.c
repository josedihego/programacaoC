#include <stdio.h>
#include <stdlib.h>

#define TAXA 0.01

int main()
{
    int horas;
    int dias;
    printf("Informe o numero de dias e horas\n");
    printf("\t Formado número dias e número horas:");
    scanf("%d dias e %d horas", &dias, &horas);
    printf("Você digitou %d dias e %d horas\n", dias, horas);
    int total_horas = dias * 24 + horas;
    float gasto_total = total_horas * TAXA;
    if (gasto_total > 100)
    {
        printf("A bateria descarregou totalmente\n");
    }
    else
    {
        printf("Você gastou %.2f %% da bateria\n", gasto_total);
        float sobra = 100 - gasto_total;
        printf("A bateria ainda possui %.2f %% da carga\n", sobra);
    }
}