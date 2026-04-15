#include <stdio.h>
#include <stdlib.h>

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
        x1 = (-b+raiz(delta))/(2*a);
        x2 = (-b-raiz(delta))/(2*a);
        printf("x1=%.2f e x2=%.2f\n",x1,x2);
    }
    else{
        printf("Não existem raízes reais\n");
    }

}