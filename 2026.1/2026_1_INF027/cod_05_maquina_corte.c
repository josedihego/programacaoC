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
    //variável interna para unidade de medida 1.metros 2. centímetros
    int unidade;
    // entradas
    float velocidade;
    float tempo;
    //saídas
    float comprimento;
    printf("Informe a unidade de tempo:\n \t 1.segundos \t 2.minutos: ");
    int opcao_tempo;
    scanf("%d",&opcao_tempo);
    printf("Informe o valor do intervalo de corte:");
    scanf("%f",&tempo);
    printf("Informe a unidade de velocidade: \n \t 1. metros/segundo \t 2. metros/minuto \t 3. centímetros/segundo \t 4. centímetros/minuto: ");
    int opcao_velocidade;
    scanf("%d",&opcao_velocidade);
    printf("Informe a velocidade: ");
    scanf("%f",&velocidade);

    // testa se a velocidade é metros/segundo ou metros/minuto
    if(opcao_velocidade==1 || opcao_velocidade ==2){
        // se for coloca unidade como 1 (metros)
        unidade = 1;
    }
    // então foi selecionado uma das opções
    // centímetros/segundo ou centímetros/minuto
    else{
        unidade = 2;
    }
    if(opcao_tempo==1){
        // ela escolheu segundos
        if(opcao_velocidade==1 || opcao_velocidade==3){
            // neste caso a velocidade esta em metros/segundo ou centímetros/segundo
            comprimento = velocidade * tempo;
        }
        else{
            comprimento = (velocidade/60) * tempo;
        }
    }
    else{
        //ela escolheu minutos
        if(opcao_velocidade==2 || opcao_velocidade==4){
            comprimento = velocidade * tempo;
        }
        else{
            comprimento = (velocidade * 60) * tempo;
        }
    }
    printf("O comprimento da matéria prima cortada é : %.2f", comprimento);
    if(unidade==1){
        printf(" metros\n");
    }
    else{
        printf(" centímetros\n");
    }

 }