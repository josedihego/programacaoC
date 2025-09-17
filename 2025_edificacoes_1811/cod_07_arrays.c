#include <stdio.h>
#include <stdlib.h>

int main(){
    float cargas[6];
    for(int p=0; p < 6; p = p +1){
        printf("Informe a carga em toneladas para a viga n° %d:", p);
        scanf("%f",&cargas[p]);
    }
    float media;
    float soma = 0;
    for(int p = 0;p < 6; p = p +1){
        soma = soma + cargas[p];
    }
    media = soma/6;
    printf("Média %.4f\n",media);

    float maior = cargas[0];
    for(int p = 1; p < 6; p = p +1){
        if(cargas[p] > maior){
            maior = cargas[p];
        }
    }
    printf("Maior carga é: %.2f\n", maior);
    
}