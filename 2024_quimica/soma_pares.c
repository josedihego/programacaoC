#include<stdio.h>
#include<stdlib.h>

#define QNT 5
int main(){
   int soma=0;
   for(int j=0; j < QNT; j = j+1){
    printf("%d\n",j*2);
    soma = soma + j*2;
   } 
   printf("A soma dos %d primeiros números pares é:%d\n",QNT, soma);
}