#include <stdio.h>
#include <stdlib.h>

int main(){
    float massa;
    float altura;
    printf("Informe seu peso(massa) me kg: ");
    scanf("%f",&massa);
    printf("Informe sua altura em metros: ");
    scanf("%f",&altura);
    float IMC = massa/(altura * altura);
    printf("seu IMC é: %f\n",IMC);
}
