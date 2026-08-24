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
    printf("Informe a velocidade da esteira: ");
    scanf("%f",&velocidade);
    printf("Informe o intervalo de corte :");
    scanf("%f",&tempo);
    comprimento = velocidade * tempo;
    printf("Comprimento %.2f\n", comprimento);
 }