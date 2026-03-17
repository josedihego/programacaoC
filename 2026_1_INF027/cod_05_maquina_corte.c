/**
 * Crie um programa que faz a leitura do intervalo entre dois 
 * cortes, a velocidade da esteira e informa o comprimento
 * final da peça cortada.
 */

 // vamos assumir que a velocidade é em metros/segundo
 //e que o intervalo é dado em segundos
#include<stdio.h>
#include<stdlib.h>

 int main(){
    // entradas
    float velocidade;
    float tempo;
    //saídas
    float comprimento;
    printf("Informe a unidade de tempo:\n \t 1.segundos \t 2.minutos:");
    int opcao_tempo;
    scanf("%d",&opcao_tempo);
    printf("Informe o valor do intervalo de corte:");
    scanf("%f",&tempo);
    printf("Informe a unidade de velocidade: \n \t 1. metros/segundo \t 2. metros/minuto \t 3. centímetros/segundo \t 4. centímetros/minuto");
    int opcao_velocidade;
    scanf("%d",&opcao_velocidade);
    printf("Informe a velocidade: ");
    scanf("%f",&velocidade);

    if(opcao_tempo==1){
        // ela escolheu segundos
    }
    else{
        //ela escolheu minutos
    }
    
 }