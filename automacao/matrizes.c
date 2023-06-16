#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<stdbool.h>

int main(){
    int * valores  =  malloc(100 * sizeof(int));
    valores[0] = 10;
    valores[1] = 18;
    valores[2] = 50;
    int soma = valores[0] + valores[1]+ valores[2];
    printf("soma de valores: %d\n", soma );
}