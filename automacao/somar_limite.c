#include<stdio.h>
#include<stdlib.h>

int main(){
   float valor_venda;
   float somatorio = 0;
   float media;
   int qnt=0;
   while(somatorio < 15000){
      printf("%s", "Informe o valor da venda:");
      scanf("%f", &valor_venda);
      somatorio = somatorio + valor_venda;
      qnt = qnt + 1;
   }
   media = somatorio/qnt;
   printf("Média %.2f\n",media);
}