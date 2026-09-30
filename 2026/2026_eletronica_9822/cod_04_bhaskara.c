#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
   float a;
   float b;
   float c;
   float delta;
   float x1, x2;
   printf("Informe o valor de a: ");
   scanf("%f",&a);
   printf("Informe o valor de b: ");
   scanf("%f",&b);
   printf("Informe o valor de c: ");
   scanf("%f",&c);
   delta = (b*b)-(4*a*c);
   if(delta >=0){
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);
    printf("x1= %.3f e x2=%.3f\n",x1,x2);
   }
   else{
    printf("Não existem raízes reais");
   }

}