#include<stdio.h>
#include<stdlib.h>


int main(){
    float per_gar, per_med, per_lon;
    printf("Informe percentagem para garrafão:");
    scanf("%f",&per_gar);
    printf("Informe percentagem para média distância:");
    scanf("%f",&per_med);
    printf("Informe percentagem para longa distância:");
    scanf("%f",&per_lon);

    //calculo das esperanças
    float esp_gar, esp_med, esp_lon;
    esp_gar = per_gar * 2;
    esp_med = per_med * 2;
    esp_lon = per_lon * 3;
    //verificar qual maior esperança

    if(esp_gar > esp_med && esp_gar > esp_lon){
        printf("priorizar arremessos garrafão. Esperrança %.2f 🏀\n", esp_gar);
    }
    else{
        if(esp_med> esp_lon){
            printf("priorizar arremessos de média distância. Esperança %.2f🏀\n", esp_med);
        }
        else{
            printf("priorizar arremessos de longa distância. Esperança %.2f🏀\n", esp_lon);
        }
    }
}