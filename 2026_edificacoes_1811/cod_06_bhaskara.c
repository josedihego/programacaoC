#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //entrada
    float a,b, c;
    //saída
    float delta, x1, x2;
    printf("Informe o valor de a: ");
    scanf("%f",&a);
    printf("Informe o valor de b:");
    scanf("%f",&b);
    printf("Informe o valor de c:");
    scanf("%f",&c);

    delta = (b*b) - (4*a*c);
    printf("Valor de delta = %.2f\n",delta);
    if(delta>=0){
        x1 = (-b+sqrt(delta))/(2*a);
        x2 = (-b-sqrt(delta))/(2*a);
        printf("x1=%.4f e x2=%.4f\n",x1,x2);
    }
    else{
        printf("Não existem raízes reais\n");
    }

}