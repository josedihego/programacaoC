#include <stdio.h>
#include <stdlib.h>


int main(){
    float diametro;
    printf("Informe o diâmetro da esfera:");
    scanf("%f",&diametro);
    float volume_cubo = diametro * diametro * diametro;
    float volume_esfera = (4.0/3.0) * 3.14 * (diametro/2)* (diametro/2)*(diametro/2);
    float volume_restante = volume_cubo -  volume_esfera;
    printf("volume restante %.2f\n",volume_restante);
}