#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main(){
    int idade = 17;
    int idades[9] ={17,16,17,18,16,16,15,14,16};
    printf("primeiro: %d\n", idades[0]);
    printf("último: %d\n", idades[8]);
    int soma = 0;
    for(int i =0; i < 9 ; i = i + 1){
        soma = soma + idades[i];
    }
    printf("Soma dos elementos =  %d\n",soma);

}