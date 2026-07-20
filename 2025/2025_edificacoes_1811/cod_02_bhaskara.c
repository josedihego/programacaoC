#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c, delta, x1, x2;
    printf("Informe o valor de a: ");
    scanf("%f",&a);
    printf("Informe o valor de b: ");
    scanf("%f",&b);
    printf("Informe o valor de c: ");
    scanf("%f",&c);

    delta = (b*b) - (4*a*c);
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);

    printf("\U0001F467 \U0001F493 \n");
    printf("Delta = %.2f\n",delta);
    printf("X1 = %.2f\n",x1);
    printf("X2 = %.2f\n",x2);
}