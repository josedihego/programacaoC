#include<stdio.h>
#include <stdlib.h>

int main(){
    char nome [50];
    printf("Informe seu nome: ");
    scanf("%s",nome);
    printf("Olá %s, tube bem?\n", nome);
    nome[1] = getchar();
    scanf(" %c", &nome[2]);
}