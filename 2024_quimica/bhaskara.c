#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c, delta, x1, x2;
    printf("Informe o valor de a:");
    scanf("%f",&a);
    printf("informe o valor de b:");
    scanf("%f",&b);
    printf("Informe o valor de c:");
    scanf("%f", &c);
    delta = (b*b)-(4*a*c);
    if(delta >0){
        x1 = ((-1*b)+sqrt(delta))/(2*a);
        x2 = ((-1*b)-sqrt(delta))/(2*a);
        printf("Duas ra�zes: x1=%.2f e x2=%.2f\n",x1,x2);
    }
    else if(delta==0){
        x1 = x2 = (-1*b)/(2*a);
        printf("Uma ra�z: x1=x2=%.2f\n",x1);
    }
    else{
        printf("N�o existem ra�zes reais para a equa��o.\n");
    }
}