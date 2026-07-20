#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char palavra1 [50];
    char palavra2 [50];
    printf("Informe a palavra 1:");
    fgets(palavra1, 50, stdin);
    printf("Informe a palavra 2:");
    fgets(palavra2, 50, stdin);
    int resultado = strcmp(palavra1, palavra2);
    printf("Resultado da comparação: %d\n", resultado);
}