#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

int main(){
    char palavra1 [20];
    char palavra2 [20];
    printf("Informe palavra 1:");
    fgets(palavra1, 20, stdin);
    printf("Informe palavra 2:");
    fgets(palavra2, 20, stdin);
    int valor = strcmp(palavra1,palavra2); 
    printf("valor %d\n", valor);   
}