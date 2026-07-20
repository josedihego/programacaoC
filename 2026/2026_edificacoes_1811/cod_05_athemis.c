#include <stdio.h>
#include <stdlib.h>


int main(){
    float CO2;
    printf("Qual o valor do CO2");
    scanf("%f",&CO2);
    if(CO2 >5000){
        printf("PERIGO! RISCO DE MORTE!\n");
    }
    else{
        if(CO2 > 1000 && CO2 <5000){
            printf("Nível crítico. Atenção.\n");
        }
        else{
            printf("Tudo bem, ótima viagem!\n");
        }
    }
}