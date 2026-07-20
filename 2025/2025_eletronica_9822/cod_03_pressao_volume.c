#include<stdio.h>
#include<stdlib.h>

int main(){
    float P1, V1, P2, V2;
    printf("Informe o valor de P1:");
    scanf("%f",&P1);
    printf("Informe o valor de V1:");
    scanf("%f", &V1);
    printf("O que você deseja calcular?\n");
    printf("\t 1. P2\n");
    printf("\t 2. V2\n");
    int opcao;
    printf("Opção:");
    scanf("%d",&opcao);
    if(opcao ==1){
        printf("Informe o valor de V2:");
        scanf("%f",&V2);
        P2 = (P1*V1)/V2;
        printf("P2= %.2f\n",P2);
    }
    else if(opcao==2){
        printf("Informe o valor de P2:");
        scanf("%f",&P2);
        V2 = (P1*V1)/P2;
        printf("V2=%.2f\n",V2);
    }
    else{
        printf("Opção inválida :( \n");
    }
}