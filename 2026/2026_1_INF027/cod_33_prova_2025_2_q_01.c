#include <stdio.h>
#include <stdlib.h>

#define TAM 12

int main(){
    int intervalo;
    float leituras[TAM];
    for(int p = 0; p < TAM; p = p+1){
        printf("Informe a temperatura n° %d:",p+1);
        scanf("%f",&leituras[p]);
    }
    printf("Informe o intervalo: ");
    scanf("%d",&intervalo);
    float maior_media=-500;
    float menor_media= 500;

    for(int inicio=0; inicio<=TAM-intervalo; inicio= inicio+1){
        float soma = 0;
        for(int p=inicio; p < inicio+intervalo; p= p+1){
            soma = soma + leituras[p];
        }
        float media = soma/intervalo;
        if(media > maior_media){
            maior_media = media;
        }
        if(media < menor_media){
            menor_media = media;
        }
    }
    printf("Menor média %.2f e Maior média %.2f\n",menor_media, maior_media);
    
}