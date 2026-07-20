#include <stdio.h>
#include <stdlib.h>

#define P_GAR 2
#define P_MEDIA 2
#define P_LONGA 3

int main(){

    float prob_gar;
    float prob_media;
    float prob_longa;
    printf("Informe a probabilidade dentro garrafão: ");
    scanf("%f",&prob_gar);
    printf("Informe a probabilidade média distância: ");
    scanf("%f", &prob_media);
    printf("Informe a probabilidade longa distância: ");
    scanf("%f",&prob_longa);
    float esp_gar = prob_gar * P_GAR;
    float esp_media = prob_media * P_MEDIA;
    float esp_longa = prob_longa * P_LONGA;

    if(esp_gar > esp_media && esp_gar> esp_longa){
        printf("Preferir arremesos do garrafão (%.3f pontos por arremesso)\n", esp_gar);
    }
    else{
        if(esp_media > esp_longa){
             printf("Preferir arremesos de média distância (%.3f pontos por arremesso)\n", esp_media);
        }
        else{
             printf("Preferir arremesos de longa distância (%.3f pontos por arremesso)\n", esp_longa);
        }
    }

} 