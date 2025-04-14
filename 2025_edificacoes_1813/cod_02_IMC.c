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

    if(imc < 16){
        printf("Diva, você esta com magreza extrema.\n");
    }
    else if(imc >=16 && imc <17){
        printf("Diva, você esta com magreza moderada\n");
    }
}