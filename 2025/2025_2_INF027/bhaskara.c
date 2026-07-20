#include<stdio.h>
#include<stdlib.h>
#include <math.h>


int main(){
   float a, b, c;
   printf("Informe a: ");
   scanf("%f",&a);
   printf("Informe b: ");
   scanf("%f",&b);
   printf("Informe c: ");
   scanf("%f",&c);
   float delta = (b*b) - (4*a*c);

   if(delta>=0){
        float x1 = (-b + sqrt(delta))/ (2*a);
        float x2 = (-b - sqrt(delta))/(2*a);
        printf("Raiz 1 é %.2f\n", x1);
        printf("Raiz 2 é %.2f\n", x2);
   }
   else{
    printf("Equação não tem raizes reais!\n");
   }
}