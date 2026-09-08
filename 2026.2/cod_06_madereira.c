#include <stdio.h>
#include <stdlib.h>

int main(){
    //##ENTRADAS
   float A, L, C, D; // altura, largura, comprimento, densidade
    float P;// tamanho do pedaço
    //##SAÍDAS
    int qnt;
    float massa;
    //##LEITURA DAS ENTRADAS
    printf("Informe AxLxCxD:");
    scanf("%fx%fx%fx%f",&A,&L,&C,&D);
    printf("Informe o tamnho P de corte:");
    scanf("%f",&P);
    //## CALCULAR AS SAÍDAS
    int qnt = (int)(C/P);
    printf("Quantidade de pedaços produzida é %d\n",qnt);




    
}