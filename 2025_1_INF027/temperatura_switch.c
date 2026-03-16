#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("Informe uma das três opções:\n");
    printf("\t 1. Celsius para Fahrenheit\n");
    printf("\t 2. Fahrenheit para Celsius\n");
    printf("\t 3. Sair\n");
    int opcao;
    printf("Opção: ");
    scanf("%d",&opcao);
    float F, C;
    switch(opcao){
        case 1:
            printf("Informe o valor em Celsius:");   
            scanf("%f",&C);
            F = ((9.0/5) * C) + 32;
            printf("%.2f em °C = %.2f°F\n", C, F);
            break;
        case 2:
            printf("Informe o valor em Fahrenheit:");
            scanf("%f",&F);
            C = (5 * (F-32))/9;
            printf("%.2f em °F = %.2f°C\n", F, C);
            break;
        case 3:
            printf("Você escolheu sair.\n");
            break;
        default:
            printf("Opção inválida.\n");
    }
}
