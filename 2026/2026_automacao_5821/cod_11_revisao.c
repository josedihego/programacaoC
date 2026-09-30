#include <stdio.h>
#include <stdlib.h>

int main(){
   int  x;
   int y;
   printf("Informe o valor de x:");
   scanf("%d",&x);
   printf("Informe 'o valor de y:");
   scanf("%d",&y);
   if(x>y){
      printf("x é maior que y\n");
   }
   else{
    printf("y é maior ou igual a x\n");
   }
}