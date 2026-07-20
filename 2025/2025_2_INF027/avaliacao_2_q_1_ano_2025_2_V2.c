#include <stdio.h>
#include <stdlib.h>


#define TAM 12
int main(){
    float temperaturas [TAM];
    float medias[TAM];
    int pl = 0;
    int intervalo;
    float max = -500, min = 500;
    for(int p =0; p < TAM; p = p +1){
        printf("informe o valor número %d: ", p+1);
        scanf("%f",&temperaturas[p]);
    }
    printf("Informe o intervalo:");
    scanf("%d", &intervalo);
    float media;
    float soma;
    for(int p = 0; p <= TAM - intervalo; p = p +1){
        soma = 0;
        for(int i= p; i < p+intervalo; i = i +1){
            soma = soma + temperaturas[i];
        }
        media = soma / intervalo;
        medias[pl] = media;
        pl = pl +1;
    }
    for(int p = 0 ; p < pl; p = p +1){
        if(medias[p] > max){
            max = medias[p];
        }
        if(medias[p] < min){
            min = medias[p];
        }
    }
    printf("Média máxima %.2f\n", max);
    printf("Média mínima] %.2f\n", min);

}