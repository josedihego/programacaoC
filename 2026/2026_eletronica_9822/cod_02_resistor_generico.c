#include<stdio.h>
#include<stdlib.h>

int main(){
    float R1;
    float R2;
    float RF;
    printf("Informe 1.Paralelo 2.Serie: ");
    int opcao;
    scanf("%d",&opcao);
    printf("Informe o valor de R1: ");
    scanf("%f",&R1);
    printf("Informe o valor de R2: ");
    scanf("%f",&R2);
    if(opcao==1){
        RF = (R1*R2)/(R1+R2);
    }
    else{
        RF = R1+R2;
    }
    printf("Resistência final é %f\n",RF);

    return EXIT_SUCCESS;

}
