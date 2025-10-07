#include <stdio.h>
#include <stdlib.h>

int main(){
    float per_gar, per_med, per_lon;
    printf("Informe percentagem garrafão: ");
    scanf("%f",&per_gar);
    printf("Informe percentagem média distância: ");
    scanf("%f",&per_med);
    printf("Informe percentagem longa distância:");
    scanf("%f",&per_lon);
    float esp_gar, esp_med, esp_lon;
    esp_gar = per_gar * 2;
    esp_med = per_med * 2;
    esp_lon = per_lon * 3;
    if(esp_gar > esp_med && esp_gar > esp_lon){
        printf("prefira lançamentos do garrafão (%.3f)\n", esp_gar);
    }
    else{
        if(esp_med > esp_lon){
            printf("prefira lançamentos de média distância(%.3f)\n", esp_med);
        }
        else{
            printf("prefira lançamentos de longa distância (%.3f)\n",esp_lon);
        }
    }

}