#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    printf("Qual seu nome? ");
    scanf("%s", nome);
    float massa, altura, imc;
    printf("%s, informe seu peso: ", nome);
    scanf("%f", &massa);
    printf("%s, informe sua altura: ", nome);
    scanf("%f", &altura);
    imc = massa / (altura * altura);
    printf("%s, seu IMC é %.2f\n", nome, imc);
    printf("----- Resultado da análise do IMC-----\n");
    if (imc < 16)
    {
        printf("\t Magreza Grave\n");
    }
    else if (imc >= 16 && imc < 17)
    {
        printf("\t Magreza Moderada\n");
    }
    else if (imc >= 17 && imc < 18.5)
    {
        printf("\t Magreza Leve\n");
    }
    else if (imc >=18.5 && imc < 25)
    {
        printf("\t Peso normal\n");
    }
    else if(imc >=25 && imc < 30){
        printf("\t Sobrepeso \U0001F9CD\U0001F3FB \n");
    }
    else if(imc >=30 && imc < 35){
        printf("\t Obesidade Grau I\n");
    }
    else if(imc >=35 && imc < 40){
        printf("\t Obesidade Grau II\n");
    }
    else{
        printf("\t Obesidade Grau III\n");
    }
}