#include <stdio.h>
#include <stdlib.h>


int main(){
    int soma = 0;
    int i;
    for (i = 1; i <=100; i= i +1){
        soma = soma + i;
    }
    printf("Soma de valores de 1 a 100 é: %d\n", soma);
    int res = ((i-1)* i)/2;
    printf("Soma de valores de 1 a 100 sem for é: %d\n", res);
}