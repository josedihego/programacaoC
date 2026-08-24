#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a, b,c;
    printf("Informe os valores de a, b e c: ");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    float delta = (b*b) -(4*a*c);
    printf("delta = %.2f\n", delta);
    if(delta <0){
        printf("Não existem raízes reais.\n");
    }
    else{
        float x1 = (-b + sqrt(delta))/(2*a);
        float x2 = (-b - sqrt(delta))/(2*a);
        printf("x1 é %.4f e x2 é %.4f\n",x1,x2);
    }
}