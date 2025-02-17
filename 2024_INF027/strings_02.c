#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char nome [100];
    printf("Informe seu nome completo:");
    //scanf("%s", nome);// so consegue ler até o espaço em branco
    fgets(nome,100,stdin);
    printf("Olá %s\n", nome); 
}