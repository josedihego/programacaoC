#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(){
    int tamanho; // poderia ser float
    float v30, v50, v100;
    float total30, total50, total100;
    printf("Informe o tamanho da tora:");
    scanf("%d", &tamanho);
    printf("Informe agora o preço para toras de:\n");
    printf("\t 30 cm: ");
    scanf("%f",&v30);
    printf("\t 50 cm: ");
    scanf("%f",&v50);
    printf("\t 100 cm: ");
    scanf("%f",&v100);
    total30 = tamanho/30 * v30;
    total50 = tamanho/50 * v50;
    total100 = tamanho/100 * v100;

    if(total30 > total50 && total30 > total100){
        printf("Operador(a), corte em pedaços de 30 cm\n");
    }
    else{
        if(total50 > total100){
            printf("Operador(a), corte em pedaços de 50 cm\n");
        }
        else{
            printf("Operador(a), corte em pedaços de 100 cm\n");
        }
    }

    
}