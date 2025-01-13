#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    float temp_sen;
    float soma = 0.0;
    int qnt = 0;
    int qnt_fora = 0;
    float maior = INT_MIN;
    float menor = INT_MAX;
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
        if(temp_sen > maior){
            maior = temp_sen;
        }
        if(temp_sen < menor){
            menor = temp_sen;
        }
    } while (qnt_fora < 2);
    printf("Média de temperaturas lidas é: %.2f°C\n",soma/qnt);
    printf("Menor valor é: %.2f °C\n", menor);
    printf("Maior valor é: %.2f °C\n", maior);
}