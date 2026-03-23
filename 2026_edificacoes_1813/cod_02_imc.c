#include <stdio.h>
#include <stdlib.h>

int main(){
    float m;
    float a;
    float imc;
    printf("Informe sua altura: ");
    scanf("%f",&a);
    printf("Informe seu peso(massa) em kg: ");
    scanf("%f",&m);
    imc = m/(a*a);
    printf("Seu IMC é %.1f\n",imc);
}
