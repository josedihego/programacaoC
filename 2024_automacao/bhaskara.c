#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c; // usu�rio ir� informar
    float delta, x1, x2;// programa deve calcular
    printf("Informe o valor de a:");
    scanf("%f",&a);
    printf("Informe o valor de b:");
    scanf("%f",&b);
    printf("Informe o valor de c:");
    scanf("%f",&c);
    delta = (b*b) - (4*a*c);
    if(delta >0){
       x1 =  ((-1*b)+sqrt(delta))/(2*a);
       x2 = ((-1*b)-sqrt(delta))/(2*a);
       printf("Duas ra�zes reais: x1 = %.2f e x2=%.2f\n",x1,x2);
    }
    else if(delta==0){
        x1 = x2 = (-1*b)/(2*a);
        printf("Uma raiz real: x1=x2=%.2f",x1);
    }
    else{
        printf("A equa��o n�o tem ra�zes reais.\n");
    }
}