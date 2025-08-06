#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
   int idade;
   char nome [100];
   printf("%s", "Informe seu nome: ");
   //scanf("%s", nome); // falha
   fgets(nome, sizeof(nome), stdin);
   printf("%s", "Informe sua idade: ");
   scanf("%d", &idade);
   strtok(nome, "\n");
   printf("Olá %s você tem %d anos\n", nome, idade);
}