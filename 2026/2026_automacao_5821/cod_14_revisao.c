#include <stdio.h>
#include <stdlib.h>


int main(){

    float temperaturas[10];

    for(int p=0; p < 10;  p = p +1){
        printf("Informe a %d° temperatura: ",p+1);//pede a temperatura
        scanf("%f",&temperaturas[p]);
    }
    //encontrar maior
    float maior = temperaturas[0];
    for(int p=1; p < 10; p = p +1){
        if(temperaturas[p] > maior){
            maior = temperaturas[p];
        }
    }
    printf("Maior temperatura é %.2f\n", maior);

    //encontra menor
    float menor = temperaturas[0];
    for(int p=1; p < 10; p = p +1){
        if(temperaturas[p] < menor){
            menor = temperaturas[p];
        }
    }
    printf("Menor temperatura é %.2f\n",menor);

    //encontra média

    float soma = 0;
    for(int p=0; p < 10; p = p+1){
        soma = soma + temperaturas[p];
    }
    printf("Média é %.2f\n",soma/10);
}