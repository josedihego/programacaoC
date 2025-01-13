#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp_sen;
    float soma = 0.0;
    int qnt = 0;
    int qnt_fora = 0;
    do
    {
        printf("Informe a temperatura do sensor:\n");
        scanf("%f", &temp_sen);
        soma = soma + temp_sen;
        qnt = qnt + 1;
        if(temp_sen<20 || temp_sen >30){
            qnt_fora = qnt_fora + 1;
        }
        else{
            qnt_fora = 0;
        }
    } while (qnt_fora < 2);
    printf("Média de temperaturas lidas é: %.2f°C\n",soma/qnt);
}