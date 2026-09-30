#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 7

int main(){

    float precos[TAMANHO];
    float litragens[TAMANHO];
    // for para leitura dos dois arrays
    for(int dia=0; dia < TAMANHO; dia = dia +1){
        printf("Informe o valor por litro em R$: ");
        scanf("%f",&precos[dia]);
        printf("Informe a quantidade de litros abastecida:");
        scanf("%f",&litragens[dia]);
    }


    float gasto_total = 0;
    float litros_total = 0;
    for(int dia=0; dia < TAMANHO; dia = dia +1){
        gasto_total = gasto_total + litragens[dia] * precos[dia];
        litros_total = litros_total + litragens[dia];
    }
    float media = gasto_total/litros_total;
    printf("Média é: %.2f", media);
    /** 
     (7.80 * 25 +
     7.90 * 40 +
     8.50 * 30 +
     9.03 * 10 +
     6.50 * 50 +
     6.00 * 60 +
     8.33 * 30 )/(25+40+30+10+50+60+30)
     */

}