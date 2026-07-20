#include <stdio.h>
#include <stdlib.h>


int main(){
    float R1;
    float R2;
    float RF;
    int opcao;
    printf("Informe a resistência número 1: ");
    scanf("%f",&R1);
    printf("Informe a resistência número 2: ");
    scanf("%f",&R2);
    printf("Informe a opção: 1.Série 2.Paralelo : ");
    scanf("%d", &opcao);
    if(opcao==1){
        RF = R1 + R2;
    }
    else{
        RF = (R1*R2)/(R1+R2);
    }
    printf("Resistência final é %.2f\n", RF);
    return EXIT_SUCCESS;
}