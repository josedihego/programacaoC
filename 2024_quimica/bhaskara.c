#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c;
    printf("Informe o valor de a:");
    scanf("%f",&a);
    printf("Informe o valor de b:");
    scanf("%f",&b);
    printf("Informe o valor de c:");
    scanf("%f",&c);

    float delta = (b * b) - (4 * a * c);
    if(delta > 0){
        float x1 = (-1 * b + sqrt(delta))/(2 * a);
        float x2 = (-1 * b - sqrt(delta))/(2 * a);
    }
    else{

    }
}
