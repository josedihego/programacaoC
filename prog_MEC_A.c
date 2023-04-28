#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calc_delta(float a, float b, float c){
    float resultado = pow(b,2) - (4 * a * c);
    return resultado;
}

float calc_x1(float a, float b, float delta){
    float resultado  = ((-1*b) + sqrt(delta))/(2*a);
    return resultado;
}
float calc_x2(float a, float b, float delta){
    float resultado = ((-1 * b) - sqrt(delta))/(2*a);
    return resultado;
}

int main(){
    float a, b, c;
    printf("%s", "Informe o valor de a:");
    scanf("%f", &a);
    printf("%s", "Informe o valor de b:");
    scanf("%f", &b);
    printf("%s", "Informe o valor de c:");
    scanf("%f", &c);

    float delta  = calc_delta(a,b,c);
    if(delta < 0){
        printf("%s", "Equação não possui raízes reais!\n");
    }else{
        float x1 = calc_x1(a,b,delta);
        float x2 = calc_x2(a,b,delta);
        printf("x1 = %f, x2 = %f\n",x1,x2);
    }
 return EXIT_SUCCESS;
}




