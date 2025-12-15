#include <stdio.h>
#include <stdlib.h>


#define TAM 12
int main(){
    float temperaturas [TAM];
    int intervalo;
    float max, min;
    // leitura do array
    for(int p =0; p < TAM; p = p +1){
        printf("informe o valor número %d: ", p+1);
        scanf("%f",&temperaturas[p]);
    }
    max = temperaturas[0];
    min = temperaturas[0];
    for(int p= 1; p < TAM; p = p+1){
        if(temperaturas[p] < max){
            max = temperaturas[p];
        }
        if(temperaturas[p] > min){
            min = temperaturas[p];
        }
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
        if(media > max){
            max = media;
        }
        if(media < min){
            min = media;
        }

    }
    printf("Média máxima %.2f\n", max);
    printf("Média m[inima] %.2f\n", min);




}