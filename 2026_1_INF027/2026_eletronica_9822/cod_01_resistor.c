#include<stdio.h>
#include<stdlib.h>

int main(){
    float R1 = 100.89;
    float R2 = 200.67;
    float RF;
    printf("Informe 1.Paralelo 2.Serie: ");
    int opcao;
    scanf("%d",&opcao);
    if(opcao==1){
        RF = (R1*R2)/(R1+R2);
    }
    else{
        RF = R1+R2;
    }
    printf("Resistência final é %f\n",RF);

    return EXIT_SUCCESS;
}
