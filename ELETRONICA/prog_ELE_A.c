#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int main(){
 char nome[20];
 printf("Qual seu nome: ");
 scanf("%s", nome);
 printf("Olá %s\n", nome);
 int valor;
 int soma;
 int media;
 for(int i = 0; i < MAX; i = i +1){
    printf("Informe o valor %d°:", i+1);
    scanf("%d",&valor);
    soma = soma + valor;
 }
 media = soma/MAX;
 printf("Média  = %d\n", media);
 return EXIT_SUCCESS;
}
