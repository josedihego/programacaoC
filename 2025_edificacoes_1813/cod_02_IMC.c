#include <stdio.h>
#include <math.h>


int main(){
    float m,h,imc;
    printf("Informe sua altura: ");
    scanf("%f",&h);
    printf("Informe sua massa: ");
    scanf("%f",&m);
    imc = m / (h*h);
    printf("Diva, seu IMC é: %.2f\n",imc);

}