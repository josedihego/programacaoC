#include <stdio.h>
#include <stdlib.h>

float delta(float a, float b, float c){
    float d = (b*b) - (4*a*c);
    return d;
}
int main(){
    float a,b,c;
    printf("Informe os valores de a,b,c\n");
    printf("\t a= ");
    scanf("%f",&a);
    printf("\t b= ");
    scanf("%f",&b);
    printf("\t c= ");
    scanf("%f",&c);
    float d = delta(a,b,c);
    if(d >= 0){
        printf("Existe raíz real\n");
        if(d==0) {
            printf("\t Apenas uma raíz real\n");
        }
        else {
            printf("\t Duas raízes reais\n");
        }
    }
    else{
        printf("Não existe raíz real\n");
    }

}