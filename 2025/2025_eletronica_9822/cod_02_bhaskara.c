#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    //declaração variáveis
    float a, b, c, delta, x1, x2;

    printf("Informe o valor de a: ");
    scanf("%f",&a);
    printf("Informe o valor de b: ");
    scanf("%f",&b);
    printf("Informe o valor de c: ");
    scanf("%f",&c);

    delta = (b*b) - (4*a*c);
    if(delta >= 0){
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        if(delta==0){
            printf("A equação tem somente uma raíz:\n");
            printf("x = %.2f\n", x1);
        }
        else{
            printf("A equação tem duas raízes reais:\n");
            printf("x1= %.2f\n", x1);
            printf("x2= %.2f\n", x2);
        }
    }
    else{
        printf("A equação não possui raízes reais.\n");
    }
   

}