#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a, b, c;
    float delta;
    float x1, x2;
    printf("%s:", "Informe o valor de a:");
    scanf("%f", &a);
    printf("%s", "Informe o valor de b:");
    scanf("%f", &b);
    printf("%s", "informe o valor de c:");
    scanf("%f", &c);
    delta = (b * b) - (4 * a * c);
    if(delta > 0){
        x1 = (-1 * b + sqrt(delta))/(2*a);
        x2 = (-1 * b - sqrt(delta))/(2*a);
        printf("x1=%.2f\n", x1);
        printf("x2=%.2f\n", x2);
    }
    else if(delta == 0){
        x1 = (-1 * b)/(2*a);
        printf("x1=x2=%.2f\n", x1);
    }
    else{
        printf("%s","Sem raízes reais.\n");
    }

    return EXIT_SUCCESS;
}