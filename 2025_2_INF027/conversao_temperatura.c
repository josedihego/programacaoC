#include <stdio.h>
#include <stdlib.h>

int main(){
    float C, F;
    int opcao;
    printf("Informe uma das opções\n");
    printf("\t 1. Converter de Fahrenheit para Celsius.\n");
    printf("\t 2. Converter de Celsius para Fahrenheit\n");
    printf("Opção escolhida: ");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
            printf("Informe a temperatura em Fahrenheit:");
            scanf("%f",&F);
            C = (F-32) * (5.0/9.0);
            printf("🌡️ %.2f °C é o mesmo que %.2f F\n",C,F);
            break;
        case 2:
            printf("Informe a temperatura em Celsius:");
            scanf("%f",&C);
            F = (C * (9.0/5.0)) + 32;
            printf("🌡️ %.2f F é o mesmo que %.2f°C\n", F,C);
            break;
        default:
            printf("Opção inválida");
    }
}