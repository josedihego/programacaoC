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
    printf("Seu IMC é %.2f\n",imc);
    if(imc >= 18.5 && imc <=24.9){
        printf("Seu IMC esta normal, parabéns!");
    }
    else{
        printf("Seu IMC esta anormal! Verificar!");
    }
}
