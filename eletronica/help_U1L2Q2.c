#include <stdio.h>
#include<stdlib.h>

int main(){
  int lampadas [50];
  for(int i = 0; i < 50; i = i+1){
    lampadas[i] = 1;
  }
   for(int i = 0; i < 50; i = i+1){
    printf("Lampada %d esta %d\n",i,lampadas[i]);
   }
   printf("O que você deseja fazer? 1. acender  2.desligar");
   int opcao;
   scanf("%d",&opcao);
   // ler o número da lampada
   // se ela escolehu 1, acender a lampada
   // se ela escolheu 0, apagara  lampada

}