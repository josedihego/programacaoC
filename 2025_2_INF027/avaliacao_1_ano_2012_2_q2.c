#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora_i, minuto_i;
    int hora_f, minuto_f;
    printf("Informe o horário de início:");
    scanf("%d:%d",&hora_i,&minuto_i);
    printf("Informe o horário de fim:");
    scanf("%d:%d",&hora_f, &minuto_f);

    int qnt_i = (hora_i * 60) + minuto_i;
    int qnt_f = (hora_f * 60) + minuto_f;

    int dif = qnt_f - qnt_i;

    int dif_h = dif/60;
    int dif_m = dif%60;

    printf("Intervalo %d:%d\n", dif_h,dif_m);

}